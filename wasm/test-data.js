/**
 * Unicode case test data
 */

/**
 * All lower case characters as in a single string.
 */
export const allLowerCaseCharacters = 
    "abcdefghijklmnopqrstuvwxyz" +      // Basic Latin
    "àáâãäåæçèéêëìíîïðñòóôõöøùúûüýþ";   // Latin 1 Supplement

/**
 * All upper case characters as in a single string.
 */
export const allUpperCaseCharacters =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ" +      // Basic Latin
    "ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞ";   // Latin 1 Supplement

/**
 * Array of upper and lower case pairs.
 */
export const upperLowerCasePairList = [
    // Basic Latin
    { lowerText: 'a', lowerChar: 0x0061, upperText: 'A', upperChar: 0x0041 },
    { lowerText: 'b', lowerChar: 0x0062, upperText: 'B', upperChar: 0x0042 },
    { lowerText: 'c', lowerChar: 0x0063, upperText: 'C', upperChar: 0x0043 },
    { lowerText: 'd', lowerChar: 0x0064, upperText: 'D', upperChar: 0x0044 },
    { lowerText: 'e', lowerChar: 0x0065, upperText: 'E', upperChar: 0x0045 },
    { lowerText: 'f', lowerChar: 0x0066, upperText: 'F', upperChar: 0x0046 },
    { lowerText: 'g', lowerChar: 0x0067, upperText: 'G', upperChar: 0x0047 },
    { lowerText: 'h', lowerChar: 0x0068, upperText: 'H', upperChar: 0x0048 },
    { lowerText: 'i', lowerChar: 0x0069, upperText: 'I', upperChar: 0x0049 },
    { lowerText: 'j', lowerChar: 0x006A, upperText: 'J', upperChar: 0x004A },
    { lowerText: 'k', lowerChar: 0x006B, upperText: 'K', upperChar: 0x004B },
    { lowerText: 'l', lowerChar: 0x006C, upperText: 'L', upperChar: 0x004C },
    { lowerText: 'm', lowerChar: 0x006D, upperText: 'M', upperChar: 0x004D },
    { lowerText: 'n', lowerChar: 0x006E, upperText: 'N', upperChar: 0x004E },
    { lowerText: 'o', lowerChar: 0x006F, upperText: 'O', upperChar: 0x004F },
    { lowerText: 'p', lowerChar: 0x0070, upperText: 'P', upperChar: 0x0050 },
    { lowerText: 'q', lowerChar: 0x0071, upperText: 'Q', upperChar: 0x0051 },
    { lowerText: 'r', lowerChar: 0x0072, upperText: 'R', upperChar: 0x0052 },
    { lowerText: 's', lowerChar: 0x0073, upperText: 'S', upperChar: 0x0053 },
    { lowerText: 't', lowerChar: 0x0074, upperText: 'T', upperChar: 0x0054 },
    { lowerText: 'u', lowerChar: 0x0075, upperText: 'U', upperChar: 0x0055 },
    { lowerText: 'v', lowerChar: 0x0076, upperText: 'V', upperChar: 0x0056 },
    { lowerText: 'w', lowerChar: 0x0077, upperText: 'W', upperChar: 0x0057 },
    { lowerText: 'x', lowerChar: 0x0078, upperText: 'X', upperChar: 0x0058 },
    { lowerText: 'y', lowerChar: 0x0079, upperText: 'Y', upperChar: 0x0059 },
    { lowerText: 'z', lowerChar: 0x007A, upperText: 'Z', upperChar: 0x005A },

    // Latin 1 Supplement
    { lowerText: 'à', lowerChar: 0x00E0, upperText: 'À', upperChar: 0x00C0 },
    { lowerText: 'á', lowerChar: 0x00E1, upperText: 'Á', upperChar: 0x00C1 },
    { lowerText: 'â', lowerChar: 0x00E2, upperText: 'Â', upperChar: 0x00C2 },
    { lowerText: 'ã', lowerChar: 0x00E3, upperText: 'Ã', upperChar: 0x00C3 },
    { lowerText: 'ä', lowerChar: 0x00E4, upperText: 'Ä', upperChar: 0x00C4 },
    { lowerText: 'å', lowerChar: 0x00E5, upperText: 'Å', upperChar: 0x00C5 },
    { lowerText: 'æ', lowerChar: 0x00E6, upperText: 'Æ', upperChar: 0x00C6 },
    { lowerText: 'ç', lowerChar: 0x00E7, upperText: 'Ç', upperChar: 0x00C7 },
    { lowerText: 'è', lowerChar: 0x00E8, upperText: 'È', upperChar: 0x00C8 },
    { lowerText: 'é', lowerChar: 0x00E9, upperText: 'É', upperChar: 0x00C9 },
    { lowerText: 'ê', lowerChar: 0x00EA, upperText: 'Ê', upperChar: 0x00CA },
    { lowerText: 'ë', lowerChar: 0x00EB, upperText: 'Ë', upperChar: 0x00CB },
    { lowerText: 'ì', lowerChar: 0x00EC, upperText: 'Ì', upperChar: 0x00CC },
    { lowerText: 'í', lowerChar: 0x00ED, upperText: 'Í', upperChar: 0x00CD },
    { lowerText: 'î', lowerChar: 0x00EE, upperText: 'Î', upperChar: 0x00CE },
    { lowerText: 'ï', lowerChar: 0x00EF, upperText: 'Ï', upperChar: 0x00CF },
    { lowerText: 'ð', lowerChar: 0x00F0, upperText: 'Ð', upperChar: 0x00D0 },
    { lowerText: 'ñ', lowerChar: 0x00F1, upperText: 'Ñ', upperChar: 0x00D1 },
    { lowerText: 'ò', lowerChar: 0x00F2, upperText: 'Ò', upperChar: 0x00D2 },
    { lowerText: 'ó', lowerChar: 0x00F3, upperText: 'Ó', upperChar: 0x00D3 },
    { lowerText: 'ô', lowerChar: 0x00F4, upperText: 'Ô', upperChar: 0x00D4 },
    { lowerText: 'õ', lowerChar: 0x00F5, upperText: 'Õ', upperChar: 0x00D5 },
    { lowerText: 'ö', lowerChar: 0x00F6, upperText: 'Ö', upperChar: 0x00D6 },
    { lowerText: 'ø', lowerChar: 0x00F8, upperText: 'Ø', upperChar: 0x00D8 },
    { lowerText: 'ù', lowerChar: 0x00F9, upperText: 'Ù', upperChar: 0x00D9 },
    { lowerText: 'ú', lowerChar: 0x00FA, upperText: 'Ú', upperChar: 0x00DA },
    { lowerText: 'û', lowerChar: 0x00FB, upperText: 'Û', upperChar: 0x00DB },
    { lowerText: 'ü', lowerChar: 0x00FC, upperText: 'Ü', upperChar: 0x00DC },
    { lowerText: 'ý', lowerChar: 0x00FD, upperText: 'Ý', upperChar: 0x00DD },
    { lowerText: 'þ', lowerChar: 0x00FE, upperText: 'Þ', upperChar: 0x00DE },

    
    
    
    
    
    
    
    
    
    
    
    
    
   



    
];