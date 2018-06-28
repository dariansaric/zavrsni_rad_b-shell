/**
 * The macros below can be used to generate a stack string that has been
 * obfuscated by a given "key" (ie 0xaa). The macros are listed from 0-31.
 * The length of the string is the number in the macro name. For example, if I
 * have an 8 byte string I want to obfuscate then I'd use XOR_STRING7. Why 7?
 * Because the macros start at 0.
 */

#define XOR_STRING0(storage, string, key) storage[0] = string[0] ^ key;
#define XOR_STRING1(storage, string, key) storage[1] = string[1] ^ key; \
    XOR_STRING0(storage, string, key);
#define XOR_STRING2(storage, string, key) storage[2] = string[2] ^ key; \
    XOR_STRING1(storage, string, key);
#define XOR_STRING3(storage, string, key) storage[3] = string[3] ^ key; \
    XOR_STRING2(storage, string, key);
#define XOR_STRING4(storage, string, key) storage[4] = string[4] ^ key; \
    XOR_STRING3(storage, string, key);
#define XOR_STRING5(storage, string, key) storage[5] = string[5] ^ key; \
    XOR_STRING4(storage, string, key);
#define XOR_STRING6(storage, string, key) storage[6] = string[6] ^ key; \
    XOR_STRING5(storage, string, key);
#define XOR_STRING7(storage, string, key) storage[7] = string[7] ^ key; \
    XOR_STRING6(storage, string, key);
#define XOR_STRING8(storage, string, key) storage[8] = string[8] ^ key; \
    XOR_STRING7(storage, string, key);
#define XOR_STRING9(storage, string, key) storage[9] = string[9] ^ key; \
    XOR_STRING8(storage, string, key);
#define XOR_STRING10(storage, string, key) storage[10] = string[10] ^ key; \
    XOR_STRING9(storage, string, key);
#define XOR_STRING11(storage, string, key) storage[11] = string[11] ^ key; \
    XOR_STRING10(storage, string, key);
#define XOR_STRING12(storage, string, key) storage[12] = string[12] ^ key; \
    XOR_STRING11(storage, string, key);
#define XOR_STRING13(storage, string, key) storage[13] = string[13] ^ key; \
    XOR_STRING12(storage, string, key);
#define XOR_STRING14(storage, string, key) storage[14] = string[14] ^ key; \
    XOR_STRING13(storage, string, key);
#define XOR_STRING15(storage, string, key) storage[15] = string[15] ^ key; \
    XOR_STRING14(storage, string, key);
#define XOR_STRING16(storage, string, key) storage[16] = string[16] ^ key; \
    XOR_STRING15(storage, string, key);
#define XOR_STRING17(storage, string, key) storage[17] = string[17] ^ key; \
    XOR_STRING16(storage, string, key);
#define XOR_STRING18(storage, string, key) storage[18] = string[18] ^ key; \
    XOR_STRING17(storage, string, key);
#define XOR_STRING19(storage, string, key) storage[19] = string[19] ^ key; \
    XOR_STRING18(storage, string, key);
#define XOR_STRING20(storage, string, key) storage[20] = string[20] ^ key; \
    XOR_STRING19(storage, string, key);
#define XOR_STRING21(storage, string, key) storage[21] = string[21] ^ key; \
    XOR_STRING20(storage, string, key);
#define XOR_STRING22(storage, string, key) storage[22] = string[22] ^ key; \
    XOR_STRING21(storage, string, key);
#define XOR_STRING23(storage, string, key) storage[23] = string[23] ^ key; \
    XOR_STRING22(storage, string, key);
#define XOR_STRING24(storage, string, key) storage[24] = string[24] ^ key; \
    XOR_STRING23(storage, string, key);
#define XOR_STRING25(storage, string, key) storage[25] = string[25] ^ key; \
    XOR_STRING24(storage, string, key);
#define XOR_STRING26(storage, string, key) storage[26] = string[26] ^ key; \
    XOR_STRING25(storage, string, key);
#define XOR_STRING27(storage, string, key) storage[27] = string[27] ^ key; \
    XOR_STRING26(storage, string, key);
#define XOR_STRING28(storage, string, key) storage[28] = string[28] ^ key; \
    XOR_STRING27(storage, string, key);
#define XOR_STRING29(storage, string, key) storage[29] = string[29] ^ key; \
    XOR_STRING28(storage, string, key);
#define XOR_STRING30(storage, string, key) storage[30] = string[30] ^ key; \
    XOR_STRING29(storage, string, key);
#define XOR_STRING31(storage, string, key) storage[31] = string[31] ^ key; \
    XOR_STRING30(storage, string, key);
#define XOR_STRING32(storage, string, key) storage[32] = string[32] ^ key; \
    XOR_STRING31(storage, string, key);
#define XOR_STRING33(storage, string, key) storage[33] = string[33] ^ key; \
    XOR_STRING32(storage, string, key);
#define XOR_STRING34(storage, string, key) storage[34] = string[34] ^ key; \
    XOR_STRING33(storage, string, key);
#define XOR_STRING35(storage, string, key) storage[35] = string[35] ^ key; \
    XOR_STRING34(storage, string, key);
#define XOR_STRING36(storage, string, key) storage[36] = string[36] ^ key; \
    XOR_STRING35(storage, string, key);
#define XOR_STRING37(storage, string, key) storage[37] = string[37] ^ key; \
    XOR_STRING36(storage, string, key);
#define XOR_STRING38(storage, string, key) storage[38] = string[38] ^ key; \
    XOR_STRING37(storage, string, key);
#define XOR_STRING39(storage, string, key) storage[39] = string[39] ^ key; \
    XOR_STRING38(storage, string, key);
#define XOR_STRING40(storage, string, key) storage[40] = string[40] ^ key; \
    XOR_STRING39(storage, string, key);
#define XOR_STRING41(storage, string, key) storage[41] = string[41] ^ key; \
    XOR_STRING40(storage, string, key);
#define XOR_STRING42(storage, string, key) storage[42] = string[42] ^ key; \
    XOR_STRING41(storage, string, key);
#define XOR_STRING43(storage, string, key) storage[43] = string[43] ^ key; \
    XOR_STRING42(storage, string, key);
#define XOR_STRING44(storage, string, key) storage[44] = string[44] ^ key; \
    XOR_STRING43(storage, string, key);
#define XOR_STRING45(storage, string, key) storage[45] = string[45] ^ key; \
    XOR_STRING44(storage, string, key);
#define XOR_STRING46(storage, string, key) storage[46] = string[46] ^ key; \
    XOR_STRING45(storage, string, key);
#define XOR_STRING47(storage, string, key) storage[47] = string[47] ^ key; \
    XOR_STRING46(storage, string, key);
#define XOR_STRING48(storage, string, key) storage[48] = string[48] ^ key; \
    XOR_STRING47(storage, string, key);
#define XOR_STRING49(storage, string, key) storage[49] = string[49] ^ key; \
    XOR_STRING48(storage, string, key);
#define XOR_STRING50(storage, string, key) storage[50] = string[50] ^ key; \
    XOR_STRING49(storage, string, key);
#define XOR_STRING51(storage, string, key) storage[51] = string[51] ^ key; \
    XOR_STRING50(storage, string, key);
#define XOR_STRING52(storage, string, key) storage[52] = string[52] ^ key; \
    XOR_STRING51(storage, string, key);
#define XOR_STRING53(storage, string, key) storage[53] = string[53] ^ key; \
    XOR_STRING52(storage, string, key);
#define XOR_STRING54(storage, string, key) storage[54] = string[54] ^ key; \
    XOR_STRING53(storage, string, key);
#define XOR_STRING55(storage, string, key) storage[55] = string[55] ^ key; \
    XOR_STRING54(storage, string, key);
#define XOR_STRING56(storage, string, key) storage[56] = string[56] ^ key; \
    XOR_STRING55(storage, string, key);
#define XOR_STRING57(storage, string, key) storage[57] = string[57] ^ key; \
    XOR_STRING56(storage, string, key);
#define XOR_STRING58(storage, string, key) storage[58] = string[58] ^ key; \
    XOR_STRING57(storage, string, key);
#define XOR_STRING59(storage, string, key) storage[59] = string[59] ^ key; \
    XOR_STRING58(storage, string, key);
#define XOR_STRING60(storage, string, key) storage[60] = string[60] ^ key; \
    XOR_STRING59(storage, string, key);
#define XOR_STRING61(storage, string, key) storage[61] = string[61] ^ key; \
    XOR_STRING60(storage, string, key);
#define XOR_STRING62(storage, string, key) storage[62] = string[62] ^ key; \
    XOR_STRING61(storage, string, key);
#define XOR_STRING63(storage, string, key) storage[63] = string[63] ^ key; \
    XOR_STRING62(storage, string, key);

/** This function deobfuscates the string. It isn't a macro because we don't
 * want to do this at compile time. We want to do it at run time.
 *
 * \param[in,out] p_string the string to deobfuscate
 * \param[in] p_length the length of the string
 * \param[in] p_key the "key" to deobfuscate with
 *
 * \note p_string will be deobfuscated. So if you call this function with
 *       p_string *a second time* then it will get reobfuscated.
 */
char* undo_xor_string(char* string, int length, char key)
{
    for (int i = 0; i < length; i++)
    {
        string[i] = string[i] ^ key;
    }
    return string;
}