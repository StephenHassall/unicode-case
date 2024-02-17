/**
 * Unicode case test data
 */

/**
 * All lower case characters as in a single string.
 */
export const allLowerCaseCharacters = 
    // Basic Latin
    "abcdefghijklmnopqrstuvwxyz" +

    // Latin 1 Supplement
    "ßàáâãäåæçèéêëìíîïðñòóôõöøùúûüýþÿ" +

    // Latin Extended A
    "āăąćĉċčďđēĕėęěĝğġģĥħĩīĭįıĳĵķĺļľŀłńņňŋōŏőœŕŗřśŝşšţťŧũūŭůűųŵŷźżž" +

    // Latin Extended B
    "ƃƅƈƌƒƙơƣƥƨƭưƴƶƹƽǆǉǌǎǐǒǔǖǘǚǜǟǡǣǥǧǩǫǭǯǳǵǹǻǽǿȁȃȅȇȉȋȍȏȑȓȕȗșțȝȟȣȥȧȩȫȭȯȱȳȼɂɇɉɋɍɏ";

/**
 * All upper case characters as in a single string.
 */
export const allUpperCaseCharacters =
    // Basic Latin
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ" +

    // Latin 1 Supplement
    "ẞÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞŸ" +

    // Latin Extended A
    "ĀĂĄĆĈĊČĎĐĒĔĖĘĚĜĞĠĢĤĦĨĪĬĮİĲĴĶĹĻĽĿŁŃŅŇŊŌŎŐŒŔŖŘŚŜŞŠŢŤŦŨŪŬŮŰŲŴŶŹŻŽ" +

    // Latin Extended B
    "ƂƄƇƋƑƘƠƢƤƧƬƯƳƵƸƼǄǇǊǍǏǑǓǕǗǙǛǞǠǢǤǦǨǪǬǮǱǴǸǺǼǾȀȂȄȆȈȊȌȎȐȒȔȖȘȚȜȞȢȤȦȨȪȬȮȰȲȻɁɆɈɊɌɎ";

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
    { lowerText: 'ß', lowerChar: 0x00DF, upperText: 'ẞ', upperChar: 0x1E9E },
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
    { lowerText: 'ÿ', lowerChar: 0x00FF, upperText: 'Ÿ', upperChar: 0x0178 },
    
    // Latin Extended A
    { lowerText: 'ā', lowerChar: 0x0101, upperText: 'Ā', upperChar: 0x0100 },
    { lowerText: 'ă', lowerChar: 0x0103, upperText: 'Ă', upperChar: 0x0102 },
    { lowerText: 'ą', lowerChar: 0x0105, upperText: 'Ą', upperChar: 0x0104 },
    { lowerText: 'ć', lowerChar: 0x0107, upperText: 'Ć', upperChar: 0x0106 },
    { lowerText: 'ĉ', lowerChar: 0x0109, upperText: 'Ĉ', upperChar: 0x0108 },
    { lowerText: 'ċ', lowerChar: 0x010B, upperText: 'Ċ', upperChar: 0x010A },
    { lowerText: 'č', lowerChar: 0x010D, upperText: 'Č', upperChar: 0x010C },
    { lowerText: 'ď', lowerChar: 0x010F, upperText: 'Ď', upperChar: 0x010E },
    { lowerText: 'đ', lowerChar: 0x0111, upperText: 'Đ', upperChar: 0x0110 },
    { lowerText: 'ē', lowerChar: 0x0113, upperText: 'Ē', upperChar: 0x0112 },
    { lowerText: 'ĕ', lowerChar: 0x0115, upperText: 'Ĕ', upperChar: 0x0114 },
    { lowerText: 'ė', lowerChar: 0x0117, upperText: 'Ė', upperChar: 0x0116 },
    { lowerText: 'ę', lowerChar: 0x0119, upperText: 'Ę', upperChar: 0x0118 },
    { lowerText: 'ě', lowerChar: 0x011B, upperText: 'Ě', upperChar: 0x011A },
    { lowerText: 'ĝ', lowerChar: 0x011D, upperText: 'Ĝ', upperChar: 0x011C },
    { lowerText: 'ğ', lowerChar: 0x011F, upperText: 'Ğ', upperChar: 0x011E },
    { lowerText: 'ġ', lowerChar: 0x0121, upperText: 'Ġ', upperChar: 0x0120 },
    { lowerText: 'ģ', lowerChar: 0x0123, upperText: 'Ģ', upperChar: 0x0122 },
    { lowerText: 'ĥ', lowerChar: 0x0125, upperText: 'Ĥ', upperChar: 0x0124 },
    { lowerText: 'ħ', lowerChar: 0x0127, upperText: 'Ħ', upperChar: 0x0126 },
    { lowerText: 'ĩ', lowerChar: 0x0129, upperText: 'Ĩ', upperChar: 0x0128 },
    { lowerText: 'ī', lowerChar: 0x012B, upperText: 'Ī', upperChar: 0x012A },
    { lowerText: 'ĭ', lowerChar: 0x012D, upperText: 'Ĭ', upperChar: 0x012C },
    { lowerText: 'į', lowerChar: 0x012F, upperText: 'Į', upperChar: 0x012E },
    { lowerText: 'ı', lowerChar: 0x0131, upperText: 'İ', upperChar: 0x0130 },
    { lowerText: 'ĳ', lowerChar: 0x0133, upperText: 'Ĳ', upperChar: 0x0132 },
    { lowerText: 'ĵ', lowerChar: 0x0135, upperText: 'Ĵ', upperChar: 0x0134 },
    { lowerText: 'ķ', lowerChar: 0x0137, upperText: 'Ķ', upperChar: 0x0136 },
    { lowerText: 'ĺ', lowerChar: 0x013A, upperText: 'Ĺ', upperChar: 0x0139 },
    { lowerText: 'ļ', lowerChar: 0x013C, upperText: 'Ļ', upperChar: 0x013B },
    { lowerText: 'ľ', lowerChar: 0x013E, upperText: 'Ľ', upperChar: 0x013D },
    { lowerText: 'ŀ', lowerChar: 0x0140, upperText: 'Ŀ', upperChar: 0x013F },
    { lowerText: 'ł', lowerChar: 0x0142, upperText: 'Ł', upperChar: 0x0141 },
    { lowerText: 'ń', lowerChar: 0x0144, upperText: 'Ń', upperChar: 0x0143 },
    { lowerText: 'ņ', lowerChar: 0x0146, upperText: 'Ņ', upperChar: 0x0145 },
    { lowerText: 'ň', lowerChar: 0x0148, upperText: 'Ň', upperChar: 0x0147 },
    { lowerText: 'ŋ', lowerChar: 0x014B, upperText: 'Ŋ', upperChar: 0x014A },
    { lowerText: 'ō', lowerChar: 0x014D, upperText: 'Ō', upperChar: 0x014C },
    { lowerText: 'ŏ', lowerChar: 0x014F, upperText: 'Ŏ', upperChar: 0x014E },
    { lowerText: 'ő', lowerChar: 0x0151, upperText: 'Ő', upperChar: 0x0150 },
    { lowerText: 'œ', lowerChar: 0x0153, upperText: 'Œ', upperChar: 0x0152 },
    { lowerText: 'ŕ', lowerChar: 0x0155, upperText: 'Ŕ', upperChar: 0x0154 },
    { lowerText: 'ŗ', lowerChar: 0x0157, upperText: 'Ŗ', upperChar: 0x0156 },
    { lowerText: 'ř', lowerChar: 0x0159, upperText: 'Ř', upperChar: 0x0158 },
    { lowerText: 'ś', lowerChar: 0x015B, upperText: 'Ś', upperChar: 0x015A },
    { lowerText: 'ŝ', lowerChar: 0x015D, upperText: 'Ŝ', upperChar: 0x015C },
    { lowerText: 'ş', lowerChar: 0x015F, upperText: 'Ş', upperChar: 0x015E },
    { lowerText: 'š', lowerChar: 0x0161, upperText: 'Š', upperChar: 0x0160 },
    { lowerText: 'ţ', lowerChar: 0x0163, upperText: 'Ţ', upperChar: 0x0162 },
    { lowerText: 'ť', lowerChar: 0x0165, upperText: 'Ť', upperChar: 0x0164 },
    { lowerText: 'ŧ', lowerChar: 0x0167, upperText: 'Ŧ', upperChar: 0x0166 },
    { lowerText: 'ũ', lowerChar: 0x0169, upperText: 'Ũ', upperChar: 0x0168 },
    { lowerText: 'ū', lowerChar: 0x016B, upperText: 'Ū', upperChar: 0x016A },
    { lowerText: 'ŭ', lowerChar: 0x016D, upperText: 'Ŭ', upperChar: 0x016C },
    { lowerText: 'ů', lowerChar: 0x016F, upperText: 'Ů', upperChar: 0x016E },
    { lowerText: 'ű', lowerChar: 0x0171, upperText: 'Ű', upperChar: 0x0170 },
    { lowerText: 'ų', lowerChar: 0x0173, upperText: 'Ų', upperChar: 0x0172 },
    { lowerText: 'ŵ', lowerChar: 0x0175, upperText: 'Ŵ', upperChar: 0x0174 },
    { lowerText: 'ŷ', lowerChar: 0x0177, upperText: 'Ŷ', upperChar: 0x0176 },
    { lowerText: 'ź', lowerChar: 0x017A, upperText: 'Ź', upperChar: 0x0179 },
    { lowerText: 'ż', lowerChar: 0x017C, upperText: 'Ż', upperChar: 0x017B },
    { lowerText: 'ž', lowerChar: 0x017E, upperText: 'Ž', upperChar: 0x017D },
        
    // Latin Extended B
    { lowerText: 'ƃ', lowerChar: 0x0183, upperText: 'Ƃ', upperChar: 0x0182 },
    { lowerText: 'ƅ', lowerChar: 0x0185, upperText: 'Ƅ', upperChar: 0x0184 },
    { lowerText: 'ƈ', lowerChar: 0x0188, upperText: 'Ƈ', upperChar: 0x0187 },
    { lowerText: 'ƌ', lowerChar: 0x018C, upperText: 'Ƌ', upperChar: 0x018B },
    { lowerText: 'ƒ', lowerChar: 0x0192, upperText: 'Ƒ', upperChar: 0x0191 },
    { lowerText: 'ƙ', lowerChar: 0x0199, upperText: 'Ƙ', upperChar: 0x0198 },
    { lowerText: 'ơ', lowerChar: 0x01A1, upperText: 'Ơ', upperChar: 0x01A0 },
    { lowerText: 'ƣ', lowerChar: 0x01A3, upperText: 'Ƣ', upperChar: 0x01A2 },
    { lowerText: 'ƥ', lowerChar: 0x01A5, upperText: 'Ƥ', upperChar: 0x01A4 },
    { lowerText: 'ƨ', lowerChar: 0x01A8, upperText: 'Ƨ', upperChar: 0x01A7 },
    { lowerText: 'ƭ', lowerChar: 0x01AD, upperText: 'Ƭ', upperChar: 0x01AC },
    { lowerText: 'ư', lowerChar: 0x01B0, upperText: 'Ư', upperChar: 0x01AF },
    { lowerText: 'ƴ', lowerChar: 0x01B4, upperText: 'Ƴ', upperChar: 0x01B3 },
    { lowerText: 'ƶ', lowerChar: 0x01B6, upperText: 'Ƶ', upperChar: 0x01B5 },
    { lowerText: 'ƹ', lowerChar: 0x01B9, upperText: 'Ƹ', upperChar: 0x01B8 },
    { lowerText: 'ƽ', lowerChar: 0x01BD, upperText: 'Ƽ', upperChar: 0x01BC },
    { lowerText: 'ǆ', lowerChar: 0x01C6, upperText: 'Ǆ', upperChar: 0x01C4 },
    { lowerText: 'ǉ', lowerChar: 0x01C9, upperText: 'Ǉ', upperChar: 0x01C7 },
    { lowerText: 'ǌ', lowerChar: 0x01CC, upperText: 'Ǌ', upperChar: 0x01CA },
    { lowerText: 'ǎ', lowerChar: 0x01CE, upperText: 'Ǎ', upperChar: 0x01CD },
    { lowerText: 'ǐ', lowerChar: 0x01D0, upperText: 'Ǐ', upperChar: 0x01CF },
    { lowerText: 'ǒ', lowerChar: 0x01D2, upperText: 'Ǒ', upperChar: 0x01D1 },
    { lowerText: 'ǔ', lowerChar: 0x01D4, upperText: 'Ǔ', upperChar: 0x01D3 },
    { lowerText: 'ǖ', lowerChar: 0x01D6, upperText: 'Ǖ', upperChar: 0x01D5 },
    { lowerText: 'ǘ', lowerChar: 0x01D8, upperText: 'Ǘ', upperChar: 0x01D7 },
    { lowerText: 'ǚ', lowerChar: 0x01DA, upperText: 'Ǚ', upperChar: 0x01D9 },
    { lowerText: 'ǜ', lowerChar: 0x01DC, upperText: 'Ǜ', upperChar: 0x01DB },
    { lowerText: 'ǟ', lowerChar: 0x01DF, upperText: 'Ǟ', upperChar: 0x01DE },
    { lowerText: 'ǡ', lowerChar: 0x01E1, upperText: 'Ǡ', upperChar: 0x01E0 },
    { lowerText: 'ǣ', lowerChar: 0x01E3, upperText: 'Ǣ', upperChar: 0x01E2 },
    { lowerText: 'ǥ', lowerChar: 0x01E5, upperText: 'Ǥ', upperChar: 0x01E4 },
    { lowerText: 'ǧ', lowerChar: 0x01E7, upperText: 'Ǧ', upperChar: 0x01E6 },
    { lowerText: 'ǩ', lowerChar: 0x01E9, upperText: 'Ǩ', upperChar: 0x01E8 },
    { lowerText: 'ǫ', lowerChar: 0x01EB, upperText: 'Ǫ', upperChar: 0x01EA },
    { lowerText: 'ǭ', lowerChar: 0x01ED, upperText: 'Ǭ', upperChar: 0x01EC },
    { lowerText: 'ǯ', lowerChar: 0x01EF, upperText: 'Ǯ', upperChar: 0x01EE },
    { lowerText: 'ǳ', lowerChar: 0x01F3, upperText: 'Ǳ', upperChar: 0x01F1 },
    { lowerText: 'ǵ', lowerChar: 0x01F5, upperText: 'Ǵ', upperChar: 0x01F4 },
    { lowerText: 'ǹ', lowerChar: 0x01F9, upperText: 'Ǹ', upperChar: 0x01F8 },
    { lowerText: 'ǻ', lowerChar: 0x01FB, upperText: 'Ǻ', upperChar: 0x01FA },
    { lowerText: 'ǽ', lowerChar: 0x01FD, upperText: 'Ǽ', upperChar: 0x01FC },
    { lowerText: 'ǿ', lowerChar: 0x01FF, upperText: 'Ǿ', upperChar: 0x01FE },
    { lowerText: 'ȁ', lowerChar: 0x0201, upperText: 'Ȁ', upperChar: 0x0200 },
    { lowerText: 'ȃ', lowerChar: 0x0203, upperText: 'Ȃ', upperChar: 0x0202 },
    { lowerText: 'ȅ', lowerChar: 0x0205, upperText: 'Ȅ', upperChar: 0x0204 },
    { lowerText: 'ȇ', lowerChar: 0x0207, upperText: 'Ȇ', upperChar: 0x0206 },
    { lowerText: 'ȉ', lowerChar: 0x0209, upperText: 'Ȉ', upperChar: 0x0208 },
    { lowerText: 'ȋ', lowerChar: 0x020B, upperText: 'Ȋ', upperChar: 0x020A },
    { lowerText: 'ȍ', lowerChar: 0x020D, upperText: 'Ȍ', upperChar: 0x020C },
    { lowerText: 'ȏ', lowerChar: 0x020F, upperText: 'Ȏ', upperChar: 0x020E },
    { lowerText: 'ȑ', lowerChar: 0x0211, upperText: 'Ȑ', upperChar: 0x0210 },
    { lowerText: 'ȓ', lowerChar: 0x0213, upperText: 'Ȓ', upperChar: 0x0212 },
    { lowerText: 'ȕ', lowerChar: 0x0215, upperText: 'Ȕ', upperChar: 0x0214 },
    { lowerText: 'ȗ', lowerChar: 0x0217, upperText: 'Ȗ', upperChar: 0x0216 },
    { lowerText: 'ș', lowerChar: 0x0219, upperText: 'Ș', upperChar: 0x0218 },
    { lowerText: 'ț', lowerChar: 0x021B, upperText: 'Ț', upperChar: 0x021A },
    { lowerText: 'ȝ', lowerChar: 0x021D, upperText: 'Ȝ', upperChar: 0x021C },
    { lowerText: 'ȟ', lowerChar: 0x021F, upperText: 'Ȟ', upperChar: 0x021E },
    { lowerText: 'ȣ', lowerChar: 0x0223, upperText: 'Ȣ', upperChar: 0x0222 },
    { lowerText: 'ȥ', lowerChar: 0x0225, upperText: 'Ȥ', upperChar: 0x0224 },
    { lowerText: 'ȧ', lowerChar: 0x0227, upperText: 'Ȧ', upperChar: 0x0226 },
    { lowerText: 'ȩ', lowerChar: 0x0229, upperText: 'Ȩ', upperChar: 0x0228 },
    { lowerText: 'ȫ', lowerChar: 0x022B, upperText: 'Ȫ', upperChar: 0x022A },
    { lowerText: 'ȭ', lowerChar: 0x022D, upperText: 'Ȭ', upperChar: 0x022C },
    { lowerText: 'ȯ', lowerChar: 0x022F, upperText: 'Ȯ', upperChar: 0x022E },
    { lowerText: 'ȱ', lowerChar: 0x0231, upperText: 'Ȱ', upperChar: 0x0230 },
    { lowerText: 'ȳ', lowerChar: 0x0233, upperText: 'Ȳ', upperChar: 0x0232 },
    { lowerText: 'ȼ', lowerChar: 0x023C, upperText: 'Ȼ', upperChar: 0x023B },
    { lowerText: 'ɂ', lowerChar: 0x0242, upperText: 'Ɂ', upperChar: 0x0241 },
    { lowerText: 'ɇ', lowerChar: 0x0247, upperText: 'Ɇ', upperChar: 0x0246 },
    { lowerText: 'ɉ', lowerChar: 0x0249, upperText: 'Ɉ', upperChar: 0x0248 },
    { lowerText: 'ɋ', lowerChar: 0x024B, upperText: 'Ɋ', upperChar: 0x024A },
    { lowerText: 'ɍ', lowerChar: 0x024D, upperText: 'Ɍ', upperChar: 0x024C },
    { lowerText: 'ɏ', lowerChar: 0x024F, upperText: 'Ɏ', upperChar: 0x024E },
        


];