/**
 * Unicode case test data.
 * 
 */

#include "test-data.h"

/**
 * All lower case characters as in a single string.
 */
const wchar_t* allLowerCaseCharacters =
    L"abcdefghijklmnopqrstuvwxyz"      // Basic Latin
    L"������������������������������";   // Latin 1 Supplement

/**
 * All upper case characters as in a single string.
 */
const wchar_t* allUpperCaseCharacters =
    L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"      // Basic Latin
    L"������������������������������";   // Latin 1 Supplement


struct upperLowerCasePair upperLowerCasePairList[] = {
    // Basic Latin
    { L'a', 0x0061, L'A', 0x0041 },
    { L'b', 0x0062, L'B', 0x0042 },
    { L'c', 0x0063, L'C', 0x0043 },
    { L'd', 0x0064, L'D', 0x0044 },
    { L'e', 0x0065, L'E', 0x0045 },
    { L'f', 0x0066, L'F', 0x0046 },
    { L'g', 0x0067, L'G', 0x0047 },
    { L'h', 0x0068, L'H', 0x0048 },
    { L'i', 0x0069, L'I', 0x0049 },
    { L'j', 0x006A, L'J', 0x004A },
    { L'k', 0x006B, L'K', 0x004B },
    { L'l', 0x006C, L'L', 0x004C },
    { L'm', 0x006D, L'M', 0x004D },
    { L'n', 0x006E, L'N', 0x004E },
    { L'o', 0x006F, L'O', 0x004F },
    { L'p', 0x0070, L'P', 0x0050 },
    { L'q', 0x0071, L'Q', 0x0051 },
    { L'r', 0x0072, L'R', 0x0052 },
    { L's', 0x0073, L'S', 0x0053 },
    { L't', 0x0074, L'T', 0x0054 },
    { L'u', 0x0075, L'U', 0x0055 },
    { L'v', 0x0076, L'V', 0x0056 },
    { L'w', 0x0077, L'W', 0x0057 },
    { L'x', 0x0078, L'X', 0x0058 },
    { L'y', 0x0079, L'Y', 0x0059 },
    { L'z', 0x007A, L'Z', 0x005A },

    // Latin 1 Supplement
    { L'�', 0x00E0, L'�', 0x00C0 },
    { L'�', 0x00E1, L'�', 0x00C1 },
    { L'�', 0x00E2, L'�', 0x00C2 },
    { L'�', 0x00E3, L'�', 0x00C3 },
    { L'�', 0x00E4, L'�', 0x00C4 },
    { L'�', 0x00E5, L'�', 0x00C5 },
    { L'�', 0x00E6, L'�', 0x00C6 },
    { L'�', 0x00E7, L'�', 0x00C7 },
    { L'�', 0x00E8, L'�', 0x00C8 },
    { L'�', 0x00E9, L'�', 0x00C9 },
    { L'�', 0x00EA, L'�', 0x00CA },
    { L'�', 0x00EB, L'�', 0x00CB },
    { L'�', 0x00EC, L'�', 0x00CC },
    { L'�', 0x00ED, L'�', 0x00CD },
    { L'�', 0x00EE, L'�', 0x00CE },
    { L'�', 0x00EF, L'�', 0x00CF },
    { L'�', 0x00F0, L'�', 0x00D0 },
    { L'�', 0x00F1, L'�', 0x00D1 },
    { L'�', 0x00F2, L'�', 0x00D2 },
    { L'�', 0x00F3, L'�', 0x00D3 },
    { L'�', 0x00F4, L'�', 0x00D4 },
    { L'�', 0x00F5, L'�', 0x00D5 },
    { L'�', 0x00F6, L'�', 0x00D6 },
    { L'�', 0x00F8, L'�', 0x00D8 },
    { L'�', 0x00F9, L'�', 0x00D9 },
    { L'�', 0x00FA, L'�', 0x00DA },
    { L'�', 0x00FB, L'�', 0x00DB },
    { L'�', 0x00FC, L'�', 0x00DC },
    { L'�', 0x00FD, L'�', 0x00DD },
    { L'�', 0x00FE, L'�', 0x00DE }

};


int upperLowerCasePairListSize = sizeof(upperLowerCasePairList) / sizeof(upperLowerCasePair);