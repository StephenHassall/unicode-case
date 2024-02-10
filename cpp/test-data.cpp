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
    L"àáâãäåæçèéêëìíîïðñòóôõöøùúûüýþ";   // Latin 1 Supplement

/**
 * All upper case characters as in a single string.
 */
const wchar_t* allUpperCaseCharacters =
    L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"      // Basic Latin
    L"ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞ";   // Latin 1 Supplement


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
    { L'à', 0x00E0, L'À', 0x00C0 },
    { L'á', 0x00E1, L'Á', 0x00C1 },
    { L'â', 0x00E2, L'Â', 0x00C2 },
    { L'ã', 0x00E3, L'Ã', 0x00C3 },
    { L'ä', 0x00E4, L'Ä', 0x00C4 },
    { L'å', 0x00E5, L'Å', 0x00C5 },
    { L'æ', 0x00E6, L'Æ', 0x00C6 },
    { L'ç', 0x00E7, L'Ç', 0x00C7 },
    { L'è', 0x00E8, L'È', 0x00C8 },
    { L'é', 0x00E9, L'É', 0x00C9 },
    { L'ê', 0x00EA, L'Ê', 0x00CA },
    { L'ë', 0x00EB, L'Ë', 0x00CB },
    { L'ì', 0x00EC, L'Ì', 0x00CC },
    { L'í', 0x00ED, L'Í', 0x00CD },
    { L'î', 0x00EE, L'Î', 0x00CE },
    { L'ï', 0x00EF, L'Ï', 0x00CF },
    { L'ð', 0x00F0, L'Ð', 0x00D0 },
    { L'ñ', 0x00F1, L'Ñ', 0x00D1 },
    { L'ò', 0x00F2, L'Ò', 0x00D2 },
    { L'ó', 0x00F3, L'Ó', 0x00D3 },
    { L'ô', 0x00F4, L'Ô', 0x00D4 },
    { L'õ', 0x00F5, L'Õ', 0x00D5 },
    { L'ö', 0x00F6, L'Ö', 0x00D6 },
    { L'ø', 0x00F8, L'Ø', 0x00D8 },
    { L'ù', 0x00F9, L'Ù', 0x00D9 },
    { L'ú', 0x00FA, L'Ú', 0x00DA },
    { L'û', 0x00FB, L'Û', 0x00DB },
    { L'ü', 0x00FC, L'Ü', 0x00DC },
    { L'ý', 0x00FD, L'Ý', 0x00DD },
    { L'þ', 0x00FE, L'Þ', 0x00DE }

};


int upperLowerCasePairListSize = sizeof(upperLowerCasePairList) / sizeof(upperLowerCasePair);