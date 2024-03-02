﻿/**
 * Unicode case test data.
 * 
 */
#include "test-data.h"

/**
 * All lower case characters as in a single string.
 */
const wchar_t* allLowerCaseCharacters =
    // Basic Latin
    L"abcdefghijklmnopqrstuvwxyz"

    // Latin 1 Supplement
    L"ßàáâãäåæçèéêëìíîïðñòóôõöøùúûüýþÿ"

    // Latin Extended A
    L"āăąćĉċčďđēĕėęěĝğġģĥħĩīĭįıĳĵķĺļľŀłńņňŋōŏőœŕŗřśŝşšţťŧũūŭůűųŵŷźżž"

    // Latin Extended B
    L"ƀƃƅƈƌƒƙƚƞơƣƥƨƩƭưƴƶƹƽƿǆǉǌǎǐǒǔǖǘǚǜǟǡǣǥǧǩǫǭǯǳǵǹǻǽǿȁȃȅȇȉȋȍȏȑȓȕȗșțȝȟȣȥȧȩȫȭȯȱȳȼȿɀɂɇɉɋɍɏɓɔɖɗɘəɛɠɣɨɩɯɲʀʈʊʋʒ"

    // IPA Extensions
    L"ɐɑɒɥɪɱɵɽʉʌʔ"

    // Greek and Coptic
    L"άέήίαβγδεζηθικλμνξοπρστυφχψωϊϋόύώϣϥϧϩϫϭϯ"

    // Cyrillic
    L"абвгдежзийклмнопрстуфхцчшщъыьэюяёђѓєѕіїјљњћќўџѡѣѥѧѩѫѭѯѱѳѵѷѹѻѽѿҁґғҕҗҙқҝҟҡңҥҧҩҫҭүұҳҵҷҹһҽҿӂӄӈӌӑӓӕӗәӛӝӟӡӣӥӧөӫӯӱӳӵӹ"

    // Armenian
    L"աբգդեզէըթժիլխծկհձղճմյնշոչպջռսվտրցւփքօֆ"

    // Georgian
    L"აბგდევზთიკლმნოპჟრსტუფქღყშჩცძწჭხჯჰჱჲჳჴჵ"
    
    // Latin Extended Additional
    L"ḁḃḅḇḉḋḍḏḑḓḕḗḙḛḝḟḡḣḥḧḩḫḭḯḱḳḵḷḹḻḽḿṁṃṅṇṉṋṍṏṑṓṕṗṙṛṝṟṡṣṥṧṩṫṭṯṱṳṵṷṹṻṽṿẁẃẅẇẉẋẍẏẑẓẕạảấầẩẫậắằẳẵặẹẻẽếềểễệỉịọỏốồổỗộớờởỡợụủứừửữựỳỵỷỹ"

    // Greek Extended
    L"ἀἁἂἃἄἅἆἇἐἑἒἓἔἕἠἡἢἣἤἥἦἧἰἱἲἳἴἵἶἷὀὁὂὃὄὅὑὓὕὗὠὡὢὣὤὥὦὧᾀᾁᾂᾃᾄᾅᾆᾇᾐᾑᾒᾓᾔᾕᾖᾗᾠᾡᾢᾣᾤᾥᾦᾧᾰᾱῐῑῠῡ"

    // Enclosed Alphanumerics
    L"ⓐⓑⓒⓓⓔⓕⓖⓗⓘⓙⓚⓛⓜⓝⓞⓟⓠⓡⓢⓣⓤⓥⓦⓧⓨⓩ"

    // Halfwidth and Fullwidth Forms
    L"ａｂｃｄｅｆｇｈｉｊｋｌｍｎｏｐｑｒｓｔｕｖｗｘｙｚ";

/**
 * All upper case characters as in a single string.
 */
const wchar_t* allUpperCaseCharacters =
    // Basic Latin
    L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    // Latin 1 Supplement
    L"ẞÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞŸ"

    // Latin Extended A
    L"ĀĂĄĆĈĊČĎĐĒĔĖĘĚĜĞĠĢĤĦĨĪĬĮİĲĴĶĹĻĽĿŁŃŅŇŊŌŎŐŒŔŖŘŚŜŞŠŢŤŦŨŪŬŮŰŲŴŶŹŻŽ"

    // Latin Extended B
    L"ɃƂƄƇƋƑƘȽȠƠƢƤƧʃƬƯƳƵƸƼǷǄǇǊǍǏǑǓǕǗǙǛǞǠǢǤǦǨǪǬǮǱǴǸǺǼǾȀȂȄȆȈȊȌȎȐȒȔȖȘȚȜȞȢȤȦȨȪȬȮȰȲȻⱾⱿɁɆɈɊɌɎƁƆƉƊƎƏƐƓƔƗƖƜƝƦƮƱƲƷ"

    // IPA Extensions
    L"ⱯⱭⱰꞍꞮⱮƟⱤɄɅˀ"

    // Greek and Coptic
    L"ΆΈΉΊΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩΪΫΌΎΏϢϤϦϨϪϬϮ"

    // Cyrillic
    L"АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯЁЂЃЄЅІЇЈЉЊЋЌЎЏѠѢѤѦѨѪѬѮѰѲѴѶѸѺѼѾҀҐҒҔҖҘҚҜҞҠҢҤҦҨҪҬҮҰҲҴҶҸҺҼҾӁӃӇӋӐӒӔӖӘӚӜӞӠӢӤӦӨӪӮӰӲӴӸ"

    // Armenian
    L"ԱԲԳԴԵԶԷԸԹԺԻԼԽԾԿՀՁՂՃՄՅՆՇՈՉՊՋՌՍՎՏՐՑՒՓՔՕՖ"

    // Georgian
    L"ႠႡႢႣႤႥႦႧႨႩႪႫႬႭႮႯႰႱႲႳႴႵႶႷႸႹႺႻႼႽႾႿჀჁჂჃჄჅ"

    // Latin Extended Additional
    L"ḀḂḄḆḈḊḌḎḐḒḔḖḘḚḜḞḠḢḤḦḨḪḬḮḰḲḴḶḸḺḼḾṀṂṄṆṈṊṌṎṐṒṔṖṘṚṜṞṠṢṤṦṨṪṬṮṰṲṴṶṸṺṼṾẀẂẄẆẈẊẌẎẐẒẔẠẢẤẦẨẪẬẮẰẲẴẶẸẺẼẾỀỂỄỆỈỊỌỎỐỒỔỖỘỚỜỞỠỢỤỦỨỪỬỮỰỲỴỶỸ"

    // Greek Extended
    L"ἈἉἊἋἌἍἎἏἘἙἚἛἜἝἨἩἪἫἬἭἮἯἸἹἺἻἼἽἾἿὈὉὊὋὌὍὙὛὝὟὨὩὪὫὬὭὮὯᾈᾉᾊᾋᾌᾍᾎᾏᾘᾙᾚᾛᾜᾝᾞᾟᾨᾩᾪᾫᾬᾭᾮᾯᾸᾹῘῙῨῩ"

    // Enclosed Alphanumerics
    L"ⒶⒷⒸⒹⒺⒻⒼⒽⒾⒿⓀⓁⓂⓃⓄⓅⓆⓇⓈⓉⓊⓋⓌⓍⓎⓏ"

    // Halfwidth and Fullwidth Forms
    L"ＡＢＣＤＥＦＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺ";

/**
 * Array of lower and upper case pairs.
 */
struct lowerUpperCasePair lowerUpperCasePairList[] = {
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
    { L'ß', 0x00DF, L'ẞ', 0x1E9E },
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
    { L'þ', 0x00FE, L'Þ', 0x00DE },
    { L'ÿ', 0x00FF, L'Ÿ', 0x0178 },
    
    // Latin Extended A
    { L'ā', 0x0101, L'Ā', 0x0100 },
    { L'ă', 0x0103, L'Ă', 0x0102 },
    { L'ą', 0x0105, L'Ą', 0x0104 },
    { L'ć', 0x0107, L'Ć', 0x0106 },
    { L'ĉ', 0x0109, L'Ĉ', 0x0108 },
    { L'ċ', 0x010B, L'Ċ', 0x010A },
    { L'č', 0x010D, L'Č', 0x010C },
    { L'ď', 0x010F, L'Ď', 0x010E },
    { L'đ', 0x0111, L'Đ', 0x0110 },
    { L'ē', 0x0113, L'Ē', 0x0112 },
    { L'ĕ', 0x0115, L'Ĕ', 0x0114 },
    { L'ė', 0x0117, L'Ė', 0x0116 },
    { L'ę', 0x0119, L'Ę', 0x0118 },
    { L'ě', 0x011B, L'Ě', 0x011A },
    { L'ĝ', 0x011D, L'Ĝ', 0x011C },
    { L'ğ', 0x011F, L'Ğ', 0x011E },
    { L'ġ', 0x0121, L'Ġ', 0x0120 },
    { L'ģ', 0x0123, L'Ģ', 0x0122 },
    { L'ĥ', 0x0125, L'Ĥ', 0x0124 },
    { L'ħ', 0x0127, L'Ħ', 0x0126 },
    { L'ĩ', 0x0129, L'Ĩ', 0x0128 },
    { L'ī', 0x012B, L'Ī', 0x012A },
    { L'ĭ', 0x012D, L'Ĭ', 0x012C },
    { L'į', 0x012F, L'Į', 0x012E },
    { L'ı', 0x0131, L'İ', 0x0130 },
    { L'ĳ', 0x0133, L'Ĳ', 0x0132 },
    { L'ĵ', 0x0135, L'Ĵ', 0x0134 },
    { L'ķ', 0x0137, L'Ķ', 0x0136 },
    { L'ĺ', 0x013A, L'Ĺ', 0x0139 },
    { L'ļ', 0x013C, L'Ļ', 0x013B },
    { L'ľ', 0x013E, L'Ľ', 0x013D },
    { L'ŀ', 0x0140, L'Ŀ', 0x013F },
    { L'ł', 0x0142, L'Ł', 0x0141 },
    { L'ń', 0x0144, L'Ń', 0x0143 },
    { L'ņ', 0x0146, L'Ņ', 0x0145 },
    { L'ň', 0x0148, L'Ň', 0x0147 },
    { L'ŋ', 0x014B, L'Ŋ', 0x014A },
    { L'ō', 0x014D, L'Ō', 0x014C },
    { L'ŏ', 0x014F, L'Ŏ', 0x014E },
    { L'ő', 0x0151, L'Ő', 0x0150 },
    { L'œ', 0x0153, L'Œ', 0x0152 },
    { L'ŕ', 0x0155, L'Ŕ', 0x0154 },
    { L'ŗ', 0x0157, L'Ŗ', 0x0156 },
    { L'ř', 0x0159, L'Ř', 0x0158 },
    { L'ś', 0x015B, L'Ś', 0x015A },
    { L'ŝ', 0x015D, L'Ŝ', 0x015C },
    { L'ş', 0x015F, L'Ş', 0x015E },
    { L'š', 0x0161, L'Š', 0x0160 },
    { L'ţ', 0x0163, L'Ţ', 0x0162 },
    { L'ť', 0x0165, L'Ť', 0x0164 },
    { L'ŧ', 0x0167, L'Ŧ', 0x0166 },
    { L'ũ', 0x0169, L'Ũ', 0x0168 },
    { L'ū', 0x016B, L'Ū', 0x016A },
    { L'ŭ', 0x016D, L'Ŭ', 0x016C },
    { L'ů', 0x016F, L'Ů', 0x016E },
    { L'ű', 0x0171, L'Ű', 0x0170 },
    { L'ų', 0x0173, L'Ų', 0x0172 },
    { L'ŵ', 0x0175, L'Ŵ', 0x0174 },
    { L'ŷ', 0x0177, L'Ŷ', 0x0176 },
    { L'ź', 0x017A, L'Ź', 0x0179 },
    { L'ż', 0x017C, L'Ż', 0x017B },
    { L'ž', 0x017E, L'Ž', 0x017D },
        
    // Latin Extended B
    { L'ƀ', 0x0180, L'Ƀ', 0x0243 },
    { L'ƃ', 0x0183, L'Ƃ', 0x0182 },
    { L'ƅ', 0x0185, L'Ƅ', 0x0184 },
    { L'ƈ', 0x0188, L'Ƈ', 0x0187 },
    { L'ƌ', 0x018C, L'Ƌ', 0x018B },
    { L'ƒ', 0x0192, L'Ƒ', 0x0191 },
    { L'ƙ', 0x0199, L'Ƙ', 0x0198 },
    { L'ƚ', 0x019A, L'Ƚ', 0x023D },
    { L'ƞ', 0x019E, L'Ƞ', 0x0220 },
    { L'ơ', 0x01A1, L'Ơ', 0x01A0 },
    { L'ƣ', 0x01A3, L'Ƣ', 0x01A2 },
    { L'ƥ', 0x01A5, L'Ƥ', 0x01A4 },
    { L'ƨ', 0x01A8, L'Ƨ', 0x01A7 },
    { L'Ʃ', 0x01A9, L'ʃ', 0x0283 },
    { L'ƭ', 0x01AD, L'Ƭ', 0x01AC },
    { L'ư', 0x01B0, L'Ư', 0x01AF },
    { L'ƴ', 0x01B4, L'Ƴ', 0x01B3 },
    { L'ƶ', 0x01B6, L'Ƶ', 0x01B5 },
    { L'ƹ', 0x01B9, L'Ƹ', 0x01B8 },
    { L'ƽ', 0x01BD, L'Ƽ', 0x01BC },
    { L'ƿ', 0x01BF, L'Ƿ', 0x01F7 },
    { L'ǆ', 0x01C6, L'Ǆ', 0x01C4 },
    { L'ǉ', 0x01C9, L'Ǉ', 0x01C7 },
    { L'ǌ', 0x01CC, L'Ǌ', 0x01CA },
    { L'ǎ', 0x01CE, L'Ǎ', 0x01CD },
    { L'ǐ', 0x01D0, L'Ǐ', 0x01CF },
    { L'ǒ', 0x01D2, L'Ǒ', 0x01D1 },
    { L'ǔ', 0x01D4, L'Ǔ', 0x01D3 },
    { L'ǖ', 0x01D6, L'Ǖ', 0x01D5 },
    { L'ǘ', 0x01D8, L'Ǘ', 0x01D7 },
    { L'ǚ', 0x01DA, L'Ǚ', 0x01D9 },
    { L'ǜ', 0x01DC, L'Ǜ', 0x01DB },
    { L'ǟ', 0x01DF, L'Ǟ', 0x01DE },
    { L'ǡ', 0x01E1, L'Ǡ', 0x01E0 },
    { L'ǣ', 0x01E3, L'Ǣ', 0x01E2 },
    { L'ǥ', 0x01E5, L'Ǥ', 0x01E4 },
    { L'ǧ', 0x01E7, L'Ǧ', 0x01E6 },
    { L'ǩ', 0x01E9, L'Ǩ', 0x01E8 },
    { L'ǫ', 0x01EB, L'Ǫ', 0x01EA },
    { L'ǭ', 0x01ED, L'Ǭ', 0x01EC },
    { L'ǯ', 0x01EF, L'Ǯ', 0x01EE },
    { L'ǳ', 0x01F3, L'Ǳ', 0x01F1 },
    { L'ǵ', 0x01F5, L'Ǵ', 0x01F4 },
    { L'ǹ', 0x01F9, L'Ǹ', 0x01F8 },
    { L'ǻ', 0x01FB, L'Ǻ', 0x01FA },
    { L'ǽ', 0x01FD, L'Ǽ', 0x01FC },
    { L'ǿ', 0x01FF, L'Ǿ', 0x01FE },
    { L'ȁ', 0x0201, L'Ȁ', 0x0200 },
    { L'ȃ', 0x0203, L'Ȃ', 0x0202 },
    { L'ȅ', 0x0205, L'Ȅ', 0x0204 },
    { L'ȇ', 0x0207, L'Ȇ', 0x0206 },
    { L'ȉ', 0x0209, L'Ȉ', 0x0208 },
    { L'ȋ', 0x020B, L'Ȋ', 0x020A },
    { L'ȍ', 0x020D, L'Ȍ', 0x020C },
    { L'ȏ', 0x020F, L'Ȏ', 0x020E },
    { L'ȑ', 0x0211, L'Ȑ', 0x0210 },
    { L'ȓ', 0x0213, L'Ȓ', 0x0212 },
    { L'ȕ', 0x0215, L'Ȕ', 0x0214 },
    { L'ȗ', 0x0217, L'Ȗ', 0x0216 },
    { L'ș', 0x0219, L'Ș', 0x0218 },
    { L'ț', 0x021B, L'Ț', 0x021A },
    { L'ȝ', 0x021D, L'Ȝ', 0x021C },
    { L'ȟ', 0x021F, L'Ȟ', 0x021E },
    { L'ȣ', 0x0223, L'Ȣ', 0x0222 },
    { L'ȥ', 0x0225, L'Ȥ', 0x0224 },
    { L'ȧ', 0x0227, L'Ȧ', 0x0226 },
    { L'ȩ', 0x0229, L'Ȩ', 0x0228 },
    { L'ȫ', 0x022B, L'Ȫ', 0x022A },
    { L'ȭ', 0x022D, L'Ȭ', 0x022C },
    { L'ȯ', 0x022F, L'Ȯ', 0x022E },
    { L'ȱ', 0x0231, L'Ȱ', 0x0230 },
    { L'ȳ', 0x0233, L'Ȳ', 0x0232 },
    { L'ȼ', 0x023C, L'Ȼ', 0x023B },
    { L'ȿ', 0x023F, L'Ȿ', 0x2C7E },
    { L'ɀ', 0x0240, L'Ɀ', 0x2C7F },
    { L'ɂ', 0x0242, L'Ɂ', 0x0241 },
    { L'ɇ', 0x0247, L'Ɇ', 0x0246 },
    { L'ɉ', 0x0249, L'Ɉ', 0x0248 },
    { L'ɋ', 0x024B, L'Ɋ', 0x024A },
    { L'ɍ', 0x024D, L'Ɍ', 0x024C },
    { L'ɏ', 0x024F, L'Ɏ', 0x024E },
    { L'ɓ', 0x0253, L'Ɓ', 0x0181 },
    { L'ɔ', 0x0254, L'Ɔ', 0x0186 },
    { L'ɖ', 0x0256, L'Ɖ', 0x0189 },
    { L'ɗ', 0x0257, L'Ɗ', 0x018A },
    { L'ɘ', 0x0258, L'Ǝ', 0x018E },
    { L'ə', 0x0259, L'Ə', 0x018F },
    { L'ɛ', 0x025B, L'Ɛ', 0x0190 },
    { L'ɠ', 0x0260, L'Ɠ', 0x0193 },
    { L'ɣ', 0x0263, L'Ɣ', 0x0194 },
    { L'ɨ', 0x0268, L'Ɨ', 0x0197 },
    { L'ɩ', 0x0269, L'Ɩ', 0x0196 },
    { L'ɯ', 0x026F, L'Ɯ', 0x019C },
    { L'ɲ', 0x0272, L'Ɲ', 0x019D },
    { L'ʀ', 0x0280, L'Ʀ', 0x01A6 },
    { L'ʈ', 0x0288, L'Ʈ', 0x01AE },
    { L'ʊ', 0x028A, L'Ʊ', 0x01B1 },
    { L'ʋ', 0x028B, L'Ʋ', 0x01B2 },
    { L'ʒ', 0x0292, L'Ʒ', 0x01B7 },
    
    // IPA Extensions
    { L'ɐ', 0x0250, L'Ɐ', 0x2C6F },
    { L'ɑ', 0x0251, L'Ɑ', 0x2C6D },
    { L'ɒ', 0x0252, L'Ɒ', 0x2C70 },
    { L'ɥ', 0x0265, L'Ɥ', 0xA78D },
    { L'ɪ', 0x026A, L'Ɪ', 0xA7AE },
    { L'ɱ', 0x0271, L'Ɱ', 0x2C6E },
    { L'ɵ', 0x0275, L'Ɵ', 0x019F },
    { L'ɽ', 0x027D, L'Ɽ', 0x2C64 },
    { L'ʉ', 0x0289, L'Ʉ', 0x0244 },
    { L'ʌ', 0x028C, L'Ʌ', 0x0245 },
    { L'ʔ', 0x0294, L'ˀ', 0x02C0 },

    // Greek and Coptic
    { L'ά', 0x03AC, L'Ά', 0x0386 },
    { L'έ', 0x03AD, L'Έ', 0x0388 },
    { L'ή', 0x03AE, L'Ή', 0x0389 },
    { L'ί', 0x03AF, L'Ί', 0x038A },
    { L'α', 0x03B1, L'Α', 0x0391 },
    { L'β', 0x03B2, L'Β', 0x0392 },
    { L'γ', 0x03B3, L'Γ', 0x0393 },
    { L'δ', 0x03B4, L'Δ', 0x0394 },
    { L'ε', 0x03B5, L'Ε', 0x0395 },
    { L'ζ', 0x03B6, L'Ζ', 0x0396 },
    { L'η', 0x03B7, L'Η', 0x0397 },
    { L'θ', 0x03B8, L'Θ', 0x0398 },
    { L'ι', 0x03B9, L'Ι', 0x0399 },
    { L'κ', 0x03BA, L'Κ', 0x039A },
    { L'λ', 0x03BB, L'Λ', 0x039B },
    { L'μ', 0x03BC, L'Μ', 0x039C },
    { L'ν', 0x03BD, L'Ν', 0x039D },
    { L'ξ', 0x03BE, L'Ξ', 0x039E },
    { L'ο', 0x03BF, L'Ο', 0x039F },
    { L'π', 0x03C0, L'Π', 0x03A0 },
    { L'ρ', 0x03C1, L'Ρ', 0x03A1 },
    { L'σ', 0x03C3, L'Σ', 0x03A3 },
    { L'τ', 0x03C4, L'Τ', 0x03A4 },
    { L'υ', 0x03C5, L'Υ', 0x03A5 },
    { L'φ', 0x03C6, L'Φ', 0x03A6 },
    { L'χ', 0x03C7, L'Χ', 0x03A7 },
    { L'ψ', 0x03C8, L'Ψ', 0x03A8 },
    { L'ω', 0x03C9, L'Ω', 0x03A9 },
    { L'ϊ', 0x03CA, L'Ϊ', 0x03AA },
    { L'ϋ', 0x03CB, L'Ϋ', 0x03AB },
    { L'ό', 0x03CC, L'Ό', 0x038C },
    { L'ύ', 0x03CD, L'Ύ', 0x038E },
    { L'ώ', 0x03CE, L'Ώ', 0x038F },
    { L'ϣ', 0x03E3, L'Ϣ', 0x03E2 },
    { L'ϥ', 0x03E5, L'Ϥ', 0x03E4 },
    { L'ϧ', 0x03E7, L'Ϧ', 0x03E6 },
    { L'ϩ', 0x03E9, L'Ϩ', 0x03E8 },
    { L'ϫ', 0x03EB, L'Ϫ', 0x03EA },
    { L'ϭ', 0x03ED, L'Ϭ', 0x03EC },
    { L'ϯ', 0x03EF, L'Ϯ', 0x03EE },
  
    // Cyrillic
    { L'а', 0x0430, L'А', 0x0410 },
    { L'б', 0x0431, L'Б', 0x0411 },
    { L'в', 0x0432, L'В', 0x0412 },
    { L'г', 0x0433, L'Г', 0x0413 },
    { L'д', 0x0434, L'Д', 0x0414 },
    { L'е', 0x0435, L'Е', 0x0415 },
    { L'ж', 0x0436, L'Ж', 0x0416 },
    { L'з', 0x0437, L'З', 0x0417 },
    { L'и', 0x0438, L'И', 0x0418 },
    { L'й', 0x0439, L'Й', 0x0419 },
    { L'к', 0x043A, L'К', 0x041A },
    { L'л', 0x043B, L'Л', 0x041B },
    { L'м', 0x043C, L'М', 0x041C },
    { L'н', 0x043D, L'Н', 0x041D },
    { L'о', 0x043E, L'О', 0x041E },
    { L'п', 0x043F, L'П', 0x041F },
    { L'р', 0x0440, L'Р', 0x0420 },
    { L'с', 0x0441, L'С', 0x0421 },
    { L'т', 0x0442, L'Т', 0x0422 },
    { L'у', 0x0443, L'У', 0x0423 },
    { L'ф', 0x0444, L'Ф', 0x0424 },
    { L'х', 0x0445, L'Х', 0x0425 },
    { L'ц', 0x0446, L'Ц', 0x0426 },
    { L'ч', 0x0447, L'Ч', 0x0427 },
    { L'ш', 0x0448, L'Ш', 0x0428 },
    { L'щ', 0x0449, L'Щ', 0x0429 },
    { L'ъ', 0x044A, L'Ъ', 0x042A },
    { L'ы', 0x044B, L'Ы', 0x042B },
    { L'ь', 0x044C, L'Ь', 0x042C },
    { L'э', 0x044D, L'Э', 0x042D },
    { L'ю', 0x044E, L'Ю', 0x042E },
    { L'я', 0x044F, L'Я', 0x042F },
    { L'ё', 0x0451, L'Ё', 0x0401 },
    { L'ђ', 0x0452, L'Ђ', 0x0402 },
    { L'ѓ', 0x0453, L'Ѓ', 0x0403 },
    { L'є', 0x0454, L'Є', 0x0404 },
    { L'ѕ', 0x0455, L'Ѕ', 0x0405 },
    { L'і', 0x0456, L'І', 0x0406 },
    { L'ї', 0x0457, L'Ї', 0x0407 },
    { L'ј', 0x0458, L'Ј', 0x0408 },
    { L'љ', 0x0459, L'Љ', 0x0409 },
    { L'њ', 0x045A, L'Њ', 0x040A },
    { L'ћ', 0x045B, L'Ћ', 0x040B },
    { L'ќ', 0x045C, L'Ќ', 0x040C },
    { L'ў', 0x045E, L'Ў', 0x040E },
    { L'џ', 0x045F, L'Џ', 0x040F },
    { L'ѡ', 0x0461, L'Ѡ', 0x0460 },
    { L'ѣ', 0x0463, L'Ѣ', 0x0462 },
    { L'ѥ', 0x0465, L'Ѥ', 0x0464 },
    { L'ѧ', 0x0467, L'Ѧ', 0x0466 },
    { L'ѩ', 0x0469, L'Ѩ', 0x0468 },
    { L'ѫ', 0x046B, L'Ѫ', 0x046A },
    { L'ѭ', 0x046D, L'Ѭ', 0x046C },
    { L'ѯ', 0x046F, L'Ѯ', 0x046E },
    { L'ѱ', 0x0471, L'Ѱ', 0x0470 },
    { L'ѳ', 0x0473, L'Ѳ', 0x0472 },
    { L'ѵ', 0x0475, L'Ѵ', 0x0474 },
    { L'ѷ', 0x0477, L'Ѷ', 0x0476 },
    { L'ѹ', 0x0479, L'Ѹ', 0x0478 },
    { L'ѻ', 0x047B, L'Ѻ', 0x047A },
    { L'ѽ', 0x047D, L'Ѽ', 0x047C },
    { L'ѿ', 0x047F, L'Ѿ', 0x047E },
    { L'ҁ', 0x0481, L'Ҁ', 0x0480 },
    { L'ґ', 0x0491, L'Ґ', 0x0490 },
    { L'ғ', 0x0493, L'Ғ', 0x0492 },
    { L'ҕ', 0x0495, L'Ҕ', 0x0494 },
    { L'җ', 0x0497, L'Җ', 0x0496 },
    { L'ҙ', 0x0499, L'Ҙ', 0x0498 },
    { L'қ', 0x049B, L'Қ', 0x049A },
    { L'ҝ', 0x049D, L'Ҝ', 0x049C },
    { L'ҟ', 0x049F, L'Ҟ', 0x049E },
    { L'ҡ', 0x04A1, L'Ҡ', 0x04A0 },
    { L'ң', 0x04A3, L'Ң', 0x04A2 },
    { L'ҥ', 0x04A5, L'Ҥ', 0x04A4 },
    { L'ҧ', 0x04A7, L'Ҧ', 0x04A6 },
    { L'ҩ', 0x04A9, L'Ҩ', 0x04A8 },
    { L'ҫ', 0x04AB, L'Ҫ', 0x04AA },
    { L'ҭ', 0x04AD, L'Ҭ', 0x04AC },
    { L'ү', 0x04AF, L'Ү', 0x04AE },
    { L'ұ', 0x04B1, L'Ұ', 0x04B0 },
    { L'ҳ', 0x04B3, L'Ҳ', 0x04B2 },
    { L'ҵ', 0x04B5, L'Ҵ', 0x04B4 },
    { L'ҷ', 0x04B7, L'Ҷ', 0x04B6 },
    { L'ҹ', 0x04B9, L'Ҹ', 0x04B8 },
    { L'һ', 0x04BB, L'Һ', 0x04BA },
    { L'ҽ', 0x04BD, L'Ҽ', 0x04BC },
    { L'ҿ', 0x04BF, L'Ҿ', 0x04BE },
    { L'ӂ', 0x04C2, L'Ӂ', 0x04C1 },
    { L'ӄ', 0x04C4, L'Ӄ', 0x04C3 },
    { L'ӈ', 0x04C8, L'Ӈ', 0x04C7 },
    { L'ӌ', 0x04CC, L'Ӌ', 0x04CB },
    { L'ӑ', 0x04D1, L'Ӑ', 0x04D0 },
    { L'ӓ', 0x04D3, L'Ӓ', 0x04D2 },
    { L'ӕ', 0x04D5, L'Ӕ', 0x04D4 },
    { L'ӗ', 0x04D7, L'Ӗ', 0x04D6 },
    { L'ә', 0x04D9, L'Ә', 0x04D8 },
    { L'ӛ', 0x04DB, L'Ӛ', 0x04DA },
    { L'ӝ', 0x04DD, L'Ӝ', 0x04DC },
    { L'ӟ', 0x04DF, L'Ӟ', 0x04DE },
    { L'ӡ', 0x04E1, L'Ӡ', 0x04E0 },
    { L'ӣ', 0x04E3, L'Ӣ', 0x04E2 },
    { L'ӥ', 0x04E5, L'Ӥ', 0x04E4 },
    { L'ӧ', 0x04E7, L'Ӧ', 0x04E6 },
    { L'ө', 0x04E9, L'Ө', 0x04E8 },
    { L'ӫ', 0x04EB, L'Ӫ', 0x04EA },
    { L'ӯ', 0x04EF, L'Ӯ', 0x04EE },
    { L'ӱ', 0x04F1, L'Ӱ', 0x04F0 },
    { L'ӳ', 0x04F3, L'Ӳ', 0x04F2 },
    { L'ӵ', 0x04F5, L'Ӵ', 0x04F4 },
    { L'ӹ', 0x04F9, L'Ӹ', 0x04F8 },
  
    // Armenian
    { L'ա', 0x0561, L'Ա', 0x0531 },
    { L'բ', 0x0562, L'Բ', 0x0532 },
    { L'գ', 0x0563, L'Գ', 0x0533 },
    { L'դ', 0x0564, L'Դ', 0x0534 },
    { L'ե', 0x0565, L'Ե', 0x0535 },
    { L'զ', 0x0566, L'Զ', 0x0536 },
    { L'է', 0x0567, L'Է', 0x0537 },
    { L'ը', 0x0568, L'Ը', 0x0538 },
    { L'թ', 0x0569, L'Թ', 0x0539 },
    { L'ժ', 0x056A, L'Ժ', 0x053A },
    { L'ի', 0x056B, L'Ի', 0x053B },
    { L'լ', 0x056C, L'Լ', 0x053C },
    { L'խ', 0x056D, L'Խ', 0x053D },
    { L'ծ', 0x056E, L'Ծ', 0x053E },
    { L'կ', 0x056F, L'Կ', 0x053F },
    { L'հ', 0x0570, L'Հ', 0x0540 },
    { L'ձ', 0x0571, L'Ձ', 0x0541 },
    { L'ղ', 0x0572, L'Ղ', 0x0542 },
    { L'ճ', 0x0573, L'Ճ', 0x0543 },
    { L'մ', 0x0574, L'Մ', 0x0544 },
    { L'յ', 0x0575, L'Յ', 0x0545 },
    { L'ն', 0x0576, L'Ն', 0x0546 },
    { L'շ', 0x0577, L'Շ', 0x0547 },
    { L'ո', 0x0578, L'Ո', 0x0548 },
    { L'չ', 0x0579, L'Չ', 0x0549 },
    { L'պ', 0x057A, L'Պ', 0x054A },
    { L'ջ', 0x057B, L'Ջ', 0x054B },
    { L'ռ', 0x057C, L'Ռ', 0x054C },
    { L'ս', 0x057D, L'Ս', 0x054D },
    { L'վ', 0x057E, L'Վ', 0x054E },
    { L'տ', 0x057F, L'Տ', 0x054F },
    { L'ր', 0x0580, L'Ր', 0x0550 },
    { L'ց', 0x0581, L'Ց', 0x0551 },
    { L'ւ', 0x0582, L'Ւ', 0x0552 },
    { L'փ', 0x0583, L'Փ', 0x0553 },
    { L'ք', 0x0584, L'Ք', 0x0554 },
    { L'օ', 0x0585, L'Օ', 0x0555 },
    { L'ֆ', 0x0586, L'Ֆ', 0x0556 },
    
    // Georgian
    { L'ა', 0x10D0, L'Ⴀ', 0x10A0 },
    { L'ბ', 0x10D1, L'Ⴁ', 0x10A1 },
    { L'გ', 0x10D2, L'Ⴂ', 0x10A2 },
    { L'დ', 0x10D3, L'Ⴃ', 0x10A3 },
    { L'ე', 0x10D4, L'Ⴄ', 0x10A4 },
    { L'ვ', 0x10D5, L'Ⴅ', 0x10A5 },
    { L'ზ', 0x10D6, L'Ⴆ', 0x10A6 },
    { L'თ', 0x10D7, L'Ⴇ', 0x10A7 },
    { L'ი', 0x10D8, L'Ⴈ', 0x10A8 },
    { L'კ', 0x10D9, L'Ⴉ', 0x10A9 },
    { L'ლ', 0x10DA, L'Ⴊ', 0x10AA },
    { L'მ', 0x10DB, L'Ⴋ', 0x10AB },
    { L'ნ', 0x10DC, L'Ⴌ', 0x10AC },
    { L'ო', 0x10DD, L'Ⴍ', 0x10AD },
    { L'პ', 0x10DE, L'Ⴎ', 0x10AE },
    { L'ჟ', 0x10DF, L'Ⴏ', 0x10AF },
    { L'რ', 0x10E0, L'Ⴐ', 0x10B0 },
    { L'ს', 0x10E1, L'Ⴑ', 0x10B1 },
    { L'ტ', 0x10E2, L'Ⴒ', 0x10B2 },
    { L'უ', 0x10E3, L'Ⴓ', 0x10B3 },
    { L'ფ', 0x10E4, L'Ⴔ', 0x10B4 },
    { L'ქ', 0x10E5, L'Ⴕ', 0x10B5 },
    { L'ღ', 0x10E6, L'Ⴖ', 0x10B6 },
    { L'ყ', 0x10E7, L'Ⴗ', 0x10B7 },
    { L'შ', 0x10E8, L'Ⴘ', 0x10B8 },
    { L'ჩ', 0x10E9, L'Ⴙ', 0x10B9 },
    { L'ც', 0x10EA, L'Ⴚ', 0x10BA },
    { L'ძ', 0x10EB, L'Ⴛ', 0x10BB },
    { L'წ', 0x10EC, L'Ⴜ', 0x10BC },
    { L'ჭ', 0x10ED, L'Ⴝ', 0x10BD },
    { L'ხ', 0x10EE, L'Ⴞ', 0x10BE },
    { L'ჯ', 0x10EF, L'Ⴟ', 0x10BF },
    { L'ჰ', 0x10F0, L'Ⴠ', 0x10C0 },
    { L'ჱ', 0x10F1, L'Ⴡ', 0x10C1 },
    { L'ჲ', 0x10F2, L'Ⴢ', 0x10C2 },
    { L'ჳ', 0x10F3, L'Ⴣ', 0x10C3 },
    { L'ჴ', 0x10F4, L'Ⴤ', 0x10C4 },
    { L'ჵ', 0x10F5, L'Ⴥ', 0x10C5 },

    // Latin Extended Additional
    { L'ḁ', 0x1E01, L'Ḁ', 0x1E00 },
    { L'ḃ', 0x1E03, L'Ḃ', 0x1E02 },
    { L'ḅ', 0x1E05, L'Ḅ', 0x1E04 },
    { L'ḇ', 0x1E07, L'Ḇ', 0x1E06 },
    { L'ḉ', 0x1E09, L'Ḉ', 0x1E08 },
    { L'ḋ', 0x1E0B, L'Ḋ', 0x1E0A },
    { L'ḍ', 0x1E0D, L'Ḍ', 0x1E0C },
    { L'ḏ', 0x1E0F, L'Ḏ', 0x1E0E },
    { L'ḑ', 0x1E11, L'Ḑ', 0x1E10 },
    { L'ḓ', 0x1E13, L'Ḓ', 0x1E12 },
    { L'ḕ', 0x1E15, L'Ḕ', 0x1E14 },
    { L'ḗ', 0x1E17, L'Ḗ', 0x1E16 },
    { L'ḙ', 0x1E19, L'Ḙ', 0x1E18 },
    { L'ḛ', 0x1E1B, L'Ḛ', 0x1E1A },
    { L'ḝ', 0x1E1D, L'Ḝ', 0x1E1C },
    { L'ḟ', 0x1E1F, L'Ḟ', 0x1E1E },
    { L'ḡ', 0x1E21, L'Ḡ', 0x1E20 },
    { L'ḣ', 0x1E23, L'Ḣ', 0x1E22 },
    { L'ḥ', 0x1E25, L'Ḥ', 0x1E24 },
    { L'ḧ', 0x1E27, L'Ḧ', 0x1E26 },
    { L'ḩ', 0x1E29, L'Ḩ', 0x1E28 },
    { L'ḫ', 0x1E2B, L'Ḫ', 0x1E2A },
    { L'ḭ', 0x1E2D, L'Ḭ', 0x1E2C },
    { L'ḯ', 0x1E2F, L'Ḯ', 0x1E2E },
    { L'ḱ', 0x1E31, L'Ḱ', 0x1E30 },
    { L'ḳ', 0x1E33, L'Ḳ', 0x1E32 },
    { L'ḵ', 0x1E35, L'Ḵ', 0x1E34 },
    { L'ḷ', 0x1E37, L'Ḷ', 0x1E36 },
    { L'ḹ', 0x1E39, L'Ḹ', 0x1E38 },
    { L'ḻ', 0x1E3B, L'Ḻ', 0x1E3A },
    { L'ḽ', 0x1E3D, L'Ḽ', 0x1E3C },
    { L'ḿ', 0x1E3F, L'Ḿ', 0x1E3E },
    { L'ṁ', 0x1E41, L'Ṁ', 0x1E40 },
    { L'ṃ', 0x1E43, L'Ṃ', 0x1E42 },
    { L'ṅ', 0x1E45, L'Ṅ', 0x1E44 },
    { L'ṇ', 0x1E47, L'Ṇ', 0x1E46 },
    { L'ṉ', 0x1E49, L'Ṉ', 0x1E48 },
    { L'ṋ', 0x1E4B, L'Ṋ', 0x1E4A },
    { L'ṍ', 0x1E4D, L'Ṍ', 0x1E4C },
    { L'ṏ', 0x1E4F, L'Ṏ', 0x1E4E },
    { L'ṑ', 0x1E51, L'Ṑ', 0x1E50 },
    { L'ṓ', 0x1E53, L'Ṓ', 0x1E52 },
    { L'ṕ', 0x1E55, L'Ṕ', 0x1E54 },
    { L'ṗ', 0x1E57, L'Ṗ', 0x1E56 },
    { L'ṙ', 0x1E59, L'Ṙ', 0x1E58 },
    { L'ṛ', 0x1E5B, L'Ṛ', 0x1E5A },
    { L'ṝ', 0x1E5D, L'Ṝ', 0x1E5C },
    { L'ṟ', 0x1E5F, L'Ṟ', 0x1E5E },
    { L'ṡ', 0x1E61, L'Ṡ', 0x1E60 },
    { L'ṣ', 0x1E63, L'Ṣ', 0x1E62 },
    { L'ṥ', 0x1E65, L'Ṥ', 0x1E64 },
    { L'ṧ', 0x1E67, L'Ṧ', 0x1E66 },
    { L'ṩ', 0x1E69, L'Ṩ', 0x1E68 },
    { L'ṫ', 0x1E6B, L'Ṫ', 0x1E6A },
    { L'ṭ', 0x1E6D, L'Ṭ', 0x1E6C },
    { L'ṯ', 0x1E6F, L'Ṯ', 0x1E6E },
    { L'ṱ', 0x1E71, L'Ṱ', 0x1E70 },
    { L'ṳ', 0x1E73, L'Ṳ', 0x1E72 },
    { L'ṵ', 0x1E75, L'Ṵ', 0x1E74 },
    { L'ṷ', 0x1E77, L'Ṷ', 0x1E76 },
    { L'ṹ', 0x1E79, L'Ṹ', 0x1E78 },
    { L'ṻ', 0x1E7B, L'Ṻ', 0x1E7A },
    { L'ṽ', 0x1E7D, L'Ṽ', 0x1E7C },
    { L'ṿ', 0x1E7F, L'Ṿ', 0x1E7E },
    { L'ẁ', 0x1E81, L'Ẁ', 0x1E80 },
    { L'ẃ', 0x1E83, L'Ẃ', 0x1E82 },
    { L'ẅ', 0x1E85, L'Ẅ', 0x1E84 },
    { L'ẇ', 0x1E87, L'Ẇ', 0x1E86 },
    { L'ẉ', 0x1E89, L'Ẉ', 0x1E88 },
    { L'ẋ', 0x1E8B, L'Ẋ', 0x1E8A },
    { L'ẍ', 0x1E8D, L'Ẍ', 0x1E8C },
    { L'ẏ', 0x1E8F, L'Ẏ', 0x1E8E },
    { L'ẑ', 0x1E91, L'Ẑ', 0x1E90 },
    { L'ẓ', 0x1E93, L'Ẓ', 0x1E92 },
    { L'ẕ', 0x1E95, L'Ẕ', 0x1E94 },
    { L'ạ', 0x1EA1, L'Ạ', 0x1EA0 },
    { L'ả', 0x1EA3, L'Ả', 0x1EA2 },
    { L'ấ', 0x1EA5, L'Ấ', 0x1EA4 },
    { L'ầ', 0x1EA7, L'Ầ', 0x1EA6 },
    { L'ẩ', 0x1EA9, L'Ẩ', 0x1EA8 },
    { L'ẫ', 0x1EAB, L'Ẫ', 0x1EAA },
    { L'ậ', 0x1EAD, L'Ậ', 0x1EAC },
    { L'ắ', 0x1EAF, L'Ắ', 0x1EAE },
    { L'ằ', 0x1EB1, L'Ằ', 0x1EB0 },
    { L'ẳ', 0x1EB3, L'Ẳ', 0x1EB2 },
    { L'ẵ', 0x1EB5, L'Ẵ', 0x1EB4 },
    { L'ặ', 0x1EB7, L'Ặ', 0x1EB6 },
    { L'ẹ', 0x1EB9, L'Ẹ', 0x1EB8 },
    { L'ẻ', 0x1EBB, L'Ẻ', 0x1EBA },
    { L'ẽ', 0x1EBD, L'Ẽ', 0x1EBC },
    { L'ế', 0x1EBF, L'Ế', 0x1EBE },
    { L'ề', 0x1EC1, L'Ề', 0x1EC0 },
    { L'ể', 0x1EC3, L'Ể', 0x1EC2 },
    { L'ễ', 0x1EC5, L'Ễ', 0x1EC4 },
    { L'ệ', 0x1EC7, L'Ệ', 0x1EC6 },
    { L'ỉ', 0x1EC9, L'Ỉ', 0x1EC8 },
    { L'ị', 0x1ECB, L'Ị', 0x1ECA },
    { L'ọ', 0x1ECD, L'Ọ', 0x1ECC },
    { L'ỏ', 0x1ECF, L'Ỏ', 0x1ECE },
    { L'ố', 0x1ED1, L'Ố', 0x1ED0 },
    { L'ồ', 0x1ED3, L'Ồ', 0x1ED2 },
    { L'ổ', 0x1ED5, L'Ổ', 0x1ED4 },
    { L'ỗ', 0x1ED7, L'Ỗ', 0x1ED6 },
    { L'ộ', 0x1ED9, L'Ộ', 0x1ED8 },
    { L'ớ', 0x1EDB, L'Ớ', 0x1EDA },
    { L'ờ', 0x1EDD, L'Ờ', 0x1EDC },
    { L'ở', 0x1EDF, L'Ở', 0x1EDE },
    { L'ỡ', 0x1EE1, L'Ỡ', 0x1EE0 },
    { L'ợ', 0x1EE3, L'Ợ', 0x1EE2 },
    { L'ụ', 0x1EE5, L'Ụ', 0x1EE4 },
    { L'ủ', 0x1EE7, L'Ủ', 0x1EE6 },
    { L'ứ', 0x1EE9, L'Ứ', 0x1EE8 },
    { L'ừ', 0x1EEB, L'Ừ', 0x1EEA },
    { L'ử', 0x1EED, L'Ử', 0x1EEC },
    { L'ữ', 0x1EEF, L'Ữ', 0x1EEE },
    { L'ự', 0x1EF1, L'Ự', 0x1EF0 },
    { L'ỳ', 0x1EF3, L'Ỳ', 0x1EF2 },
    { L'ỵ', 0x1EF5, L'Ỵ', 0x1EF4 },
    { L'ỷ', 0x1EF7, L'Ỷ', 0x1EF6 },
    { L'ỹ', 0x1EF9, L'Ỹ', 0x1EF8 },
    
    // Greek Extended
    { L'ἀ', 0x1F00, L'Ἀ', 0x1F08 },
    { L'ἁ', 0x1F01, L'Ἁ', 0x1F09 },
    { L'ἂ', 0x1F02, L'Ἂ', 0x1F0A },
    { L'ἃ', 0x1F03, L'Ἃ', 0x1F0B },
    { L'ἄ', 0x1F04, L'Ἄ', 0x1F0C },
    { L'ἅ', 0x1F05, L'Ἅ', 0x1F0D },
    { L'ἆ', 0x1F06, L'Ἆ', 0x1F0E },
    { L'ἇ', 0x1F07, L'Ἇ', 0x1F0F },
    { L'ἐ', 0x1F10, L'Ἐ', 0x1F18 },
    { L'ἑ', 0x1F11, L'Ἑ', 0x1F19 },
    { L'ἒ', 0x1F12, L'Ἒ', 0x1F1A },
    { L'ἓ', 0x1F13, L'Ἓ', 0x1F1B },
    { L'ἔ', 0x1F14, L'Ἔ', 0x1F1C },
    { L'ἕ', 0x1F15, L'Ἕ', 0x1F1D },
    { L'ἠ', 0x1F20, L'Ἠ', 0x1F28 },
    { L'ἡ', 0x1F21, L'Ἡ', 0x1F29 },
    { L'ἢ', 0x1F22, L'Ἢ', 0x1F2A },
    { L'ἣ', 0x1F23, L'Ἣ', 0x1F2B },
    { L'ἤ', 0x1F24, L'Ἤ', 0x1F2C },
    { L'ἥ', 0x1F25, L'Ἥ', 0x1F2D },
    { L'ἦ', 0x1F26, L'Ἦ', 0x1F2E },
    { L'ἧ', 0x1F27, L'Ἧ', 0x1F2F },
    { L'ἰ', 0x1F30, L'Ἰ', 0x1F38 },
    { L'ἱ', 0x1F31, L'Ἱ', 0x1F39 },
    { L'ἲ', 0x1F32, L'Ἲ', 0x1F3A },
    { L'ἳ', 0x1F33, L'Ἳ', 0x1F3B },
    { L'ἴ', 0x1F34, L'Ἴ', 0x1F3C },
    { L'ἵ', 0x1F35, L'Ἵ', 0x1F3D },
    { L'ἶ', 0x1F36, L'Ἶ', 0x1F3E },
    { L'ἷ', 0x1F37, L'Ἷ', 0x1F3F },
    { L'ὀ', 0x1F40, L'Ὀ', 0x1F48 },
    { L'ὁ', 0x1F41, L'Ὁ', 0x1F49 },
    { L'ὂ', 0x1F42, L'Ὂ', 0x1F4A },
    { L'ὃ', 0x1F43, L'Ὃ', 0x1F4B },
    { L'ὄ', 0x1F44, L'Ὄ', 0x1F4C },
    { L'ὅ', 0x1F45, L'Ὅ', 0x1F4D },
    { L'ὑ', 0x1F51, L'Ὑ', 0x1F59 },
    { L'ὓ', 0x1F53, L'Ὓ', 0x1F5B },
    { L'ὕ', 0x1F55, L'Ὕ', 0x1F5D },
    { L'ὗ', 0x1F57, L'Ὗ', 0x1F5F },
    { L'ὠ', 0x1F60, L'Ὠ', 0x1F68 },
    { L'ὡ', 0x1F61, L'Ὡ', 0x1F69 },
    { L'ὢ', 0x1F62, L'Ὢ', 0x1F6A },
    { L'ὣ', 0x1F63, L'Ὣ', 0x1F6B },
    { L'ὤ', 0x1F64, L'Ὤ', 0x1F6C },
    { L'ὥ', 0x1F65, L'Ὥ', 0x1F6D },
    { L'ὦ', 0x1F66, L'Ὦ', 0x1F6E },
    { L'ὧ', 0x1F67, L'Ὧ', 0x1F6F },
    { L'ᾀ', 0x1F80, L'ᾈ', 0x1F88 },
    { L'ᾁ', 0x1F81, L'ᾉ', 0x1F89 },
    { L'ᾂ', 0x1F82, L'ᾊ', 0x1F8A },
    { L'ᾃ', 0x1F83, L'ᾋ', 0x1F8B },
    { L'ᾄ', 0x1F84, L'ᾌ', 0x1F8C },
    { L'ᾅ', 0x1F85, L'ᾍ', 0x1F8D },
    { L'ᾆ', 0x1F86, L'ᾎ', 0x1F8E },
    { L'ᾇ', 0x1F87, L'ᾏ', 0x1F8F },
    { L'ᾐ', 0x1F90, L'ᾘ', 0x1F98 },
    { L'ᾑ', 0x1F91, L'ᾙ', 0x1F99 },
    { L'ᾒ', 0x1F92, L'ᾚ', 0x1F9A },
    { L'ᾓ', 0x1F93, L'ᾛ', 0x1F9B },
    { L'ᾔ', 0x1F94, L'ᾜ', 0x1F9C },
    { L'ᾕ', 0x1F95, L'ᾝ', 0x1F9D },
    { L'ᾖ', 0x1F96, L'ᾞ', 0x1F9E },
    { L'ᾗ', 0x1F97, L'ᾟ', 0x1F9F },
    { L'ᾠ', 0x1FA0, L'ᾨ', 0x1FA8 },
    { L'ᾡ', 0x1FA1, L'ᾩ', 0x1FA9 },
    { L'ᾢ', 0x1FA2, L'ᾪ', 0x1FAA },
    { L'ᾣ', 0x1FA3, L'ᾫ', 0x1FAB },
    { L'ᾤ', 0x1FA4, L'ᾬ', 0x1FAC },
    { L'ᾥ', 0x1FA5, L'ᾭ', 0x1FAD },
    { L'ᾦ', 0x1FA6, L'ᾮ', 0x1FAE },
    { L'ᾧ', 0x1FA7, L'ᾯ', 0x1FAF },
    { L'ᾰ', 0x1FB0, L'Ᾰ', 0x1FB8 },
    { L'ᾱ', 0x1FB1, L'Ᾱ', 0x1FB9 },
    { L'ῐ', 0x1FD0, L'Ῐ', 0x1FD8 },
    { L'ῑ', 0x1FD1, L'Ῑ', 0x1FD9 },
    { L'ῠ', 0x1FE0, L'Ῠ', 0x1FE8 },
    { L'ῡ', 0x1FE1, L'Ῡ', 0x1FE9 },
  
    // Enclosed Alphanumerics
    { L'ⓐ', 0x24D0, L'Ⓐ', 0x24B6 },
    { L'ⓑ', 0x24D1, L'Ⓑ', 0x24B7 },
    { L'ⓒ', 0x24D2, L'Ⓒ', 0x24B8 },
    { L'ⓓ', 0x24D3, L'Ⓓ', 0x24B9 },
    { L'ⓔ', 0x24D4, L'Ⓔ', 0x24BA },
    { L'ⓕ', 0x24D5, L'Ⓕ', 0x24BB },
    { L'ⓖ', 0x24D6, L'Ⓖ', 0x24BC },
    { L'ⓗ', 0x24D7, L'Ⓗ', 0x24BD },
    { L'ⓘ', 0x24D8, L'Ⓘ', 0x24BE },
    { L'ⓙ', 0x24D9, L'Ⓙ', 0x24BF },
    { L'ⓚ', 0x24DA, L'Ⓚ', 0x24C0 },
    { L'ⓛ', 0x24DB, L'Ⓛ', 0x24C1 },
    { L'ⓜ', 0x24DC, L'Ⓜ', 0x24C2 },
    { L'ⓝ', 0x24DD, L'Ⓝ', 0x24C3 },
    { L'ⓞ', 0x24DE, L'Ⓞ', 0x24C4 },
    { L'ⓟ', 0x24DF, L'Ⓟ', 0x24C5 },
    { L'ⓠ', 0x24E0, L'Ⓠ', 0x24C6 },
    { L'ⓡ', 0x24E1, L'Ⓡ', 0x24C7 },
    { L'ⓢ', 0x24E2, L'Ⓢ', 0x24C8 },
    { L'ⓣ', 0x24E3, L'Ⓣ', 0x24C9 },
    { L'ⓤ', 0x24E4, L'Ⓤ', 0x24CA },
    { L'ⓥ', 0x24E5, L'Ⓥ', 0x24CB },
    { L'ⓦ', 0x24E6, L'Ⓦ', 0x24CC },
    { L'ⓧ', 0x24E7, L'Ⓧ', 0x24CD },
    { L'ⓨ', 0x24E8, L'Ⓨ', 0x24CE },
    { L'ⓩ', 0x24E9, L'Ⓩ', 0x24CF },
  
    // Halfwidth and Fullwidth Forms
    { L'ａ', 0xFF41, L'Ａ', 0xFF21 },
    { L'ｂ', 0xFF42, L'Ｂ', 0xFF22 },
    { L'ｃ', 0xFF43, L'Ｃ', 0xFF23 },
    { L'ｄ', 0xFF44, L'Ｄ', 0xFF24 },
    { L'ｅ', 0xFF45, L'Ｅ', 0xFF25 },
    { L'ｆ', 0xFF46, L'Ｆ', 0xFF26 },
    { L'ｇ', 0xFF47, L'Ｇ', 0xFF27 },
    { L'ｈ', 0xFF48, L'Ｈ', 0xFF28 },
    { L'ｉ', 0xFF49, L'Ｉ', 0xFF29 },
    { L'ｊ', 0xFF4A, L'Ｊ', 0xFF2A },
    { L'ｋ', 0xFF4B, L'Ｋ', 0xFF2B },
    { L'ｌ', 0xFF4C, L'Ｌ', 0xFF2C },
    { L'ｍ', 0xFF4D, L'Ｍ', 0xFF2D },
    { L'ｎ', 0xFF4E, L'Ｎ', 0xFF2E },
    { L'ｏ', 0xFF4F, L'Ｏ', 0xFF2F },
    { L'ｐ', 0xFF50, L'Ｐ', 0xFF30 },
    { L'ｑ', 0xFF51, L'Ｑ', 0xFF31 },
    { L'ｒ', 0xFF52, L'Ｒ', 0xFF32 },
    { L'ｓ', 0xFF53, L'Ｓ', 0xFF33 },
    { L'ｔ', 0xFF54, L'Ｔ', 0xFF34 },
    { L'ｕ', 0xFF55, L'Ｕ', 0xFF35 },
    { L'ｖ', 0xFF56, L'Ｖ', 0xFF36 },
    { L'ｗ', 0xFF57, L'Ｗ', 0xFF37 },
    { L'ｘ', 0xFF58, L'Ｘ', 0xFF38 },
    { L'ｙ', 0xFF59, L'Ｙ', 0xFF39 },
    { L'ｚ', 0xFF5A, L'Ｚ', 0xFF3A },    



};

/**
 * The number of lower upper case pairs in the list
 */
int lowerUpperCasePairListCount = sizeof(lowerUpperCasePairList) / sizeof(lowerUpperCasePair);