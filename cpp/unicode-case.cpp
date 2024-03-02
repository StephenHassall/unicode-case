/**
 * Unicode case
 */

#include "unicode-case.h"

/**
 * unicode_case_is_lower
 */
bool unicode_case_is_lower(wchar_t character) {
    // Basic Latin
    if (character < 0x0061) return false;
    if (character <= 0x007A) return true;

    // Latin 1 Supplement
    if (character < 0x00DF) return false;
    if (character <= 0x00FF && character != 0x00F7) return true;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0101) return false;
    if (character <= 0x017E) {
        if (character >= 0x0101 && character <= 0x0137 && isOdd == true) return true;
        if (character >= 0x013A && character <= 0x0148 && isOdd == false) return true;
        if (character >= 0x014B && character <= 0x0177 && isOdd == true) return true;
        if (character >= 0x017A && character <= 0x017E && isOdd == false) return true;
    }

    // Latin Extended B and IPA Extensions
    if (character < 0x0180) return false;
    if (character <= 0x0294) {
        if (character == 0x0180) return true;
        if (character >= 0x0183 && character <= 0x0185 && isOdd == true) return true;
        if (character == 0x0188) return true;
        if (character == 0x018C) return true;
        if (character == 0x0192) return true;
        if (character == 0x0199) return true;
        if (character == 0x019A) return true;
        if (character == 0x019E) return true;
        if (character >= 0x01A1 && character <= 0x01A5 && isOdd == true) return true;
        if (character == 0x01A8) return true;
        if (character == 0x01A9) return true;
        if (character == 0x01AD) return true;
        if (character == 0x01B0) return true;
        if (character == 0x01B4) return true;
        if (character == 0x01B6) return true;
        if (character == 0x01B9) return true;
        if (character == 0x01BD) return true;
        if (character == 0x01BF) return true;
        if (character == 0x01C6) return true;
        if (character == 0x01C9) return true;
        if (character == 0x01CC) return true;
        if (character >= 0x01CE && character <= 0x01DC && isOdd == false) return true;
        if (character >= 0x01DF && character <= 0x01EF && isOdd == true) return true;
        if (character == 0x01F3) return true;
        if (character == 0x01F5) return true;
        if (character >= 0x01F9 && character <= 0x021F && isOdd == true) return true;
        if (character >= 0x0223 && character <= 0x0233 && isOdd == true) return true;
        if (character == 0x023C) return true;
        if (character == 0x023F) return true;
        if (character == 0x0240) return true;
        if (character == 0x0242) return true;
        if (character >= 0x0247 && character <= 0x024F && isOdd == true) return true;
        if (character >= 0x0250 && character <= 0x0259 && character != 0x0255) return true;
        if (character == 0x025B) return true;
        if (character == 0x0260) return true;
        if (character == 0x0263) return true;
        if (character == 0x0265) return true;
        if (character >= 0x0268 && character <= 0x026A) return true;
        if (character == 0x026F) return true;
        if (character == 0x0271) return true;
        if (character == 0x0272) return true;
        if (character == 0x0275) return true;
        if (character == 0x027D) return true;
        if (character == 0x0280) return true;
        if (character >= 0x0288 && character <= 0x028C) return true;
        if (character == 0x0292) return true;
        if (character == 0x0294) return true;        
    }

    // Greek and Coptic
    if (character < 0x03AC) return false;
    if (character <= 0x03EF) {
        if (character >= 0x03AC && character <= 0x03AF) return true;
        if (character >= 0x03B1 && character <= 0x03C1) return true;
        if (character >= 0x03C3 && character <= 0x03CE) return true;
        if (character >= 0x03E3 && character <= 0x03EF && isOdd == true) return true;
    }

    // Cyrillic
    if (character < 0x0430) return false;
    if (character <= 0x04F9) {
        if (character >= 0x0430 && character <= 0x044F) return true;
        if (character >= 0x0451 && character <= 0x045C) return true;
        if (character == 0x045E) return true;
        if (character >= 0x045F && character <= 0x0481 && isOdd == true) return true;
        if (character >= 0x0491 && character <= 0x04BF && isOdd == true) return true;
        if (character == 0x04C2) return true;
        if (character == 0x04C4) return true;
        if (character == 0x04C8) return true;
        if (character == 0x04CC) return true;
        if (character >= 0x04D1 && character <= 0x04EB && isOdd == true) return true;
        if (character >= 0x04EF && character <= 0x04F5 && isOdd == true) return true;
        if (character == 0x04F9) return true;
    }

    // Armenian
    if (character < 0x0561) return false;
    if (character <= 0x0586) {
        return true;
    }

    // Georgian
    if (character < 0x10D0) return false;
    if (character <= 0x10F5) {
        return true;
    }

    // Latin Extended Additional
    if (character < 0x1E01) return false;
    if (character <= 0x1EF9) {
        if (character >= 0x1E01 && character <= 0x1E95 && isOdd == true) return true;
        if (character >= 0x1EA1 && character <= 0x1EF9 && isOdd == true) return true;
    }

    // Greek Extended
    if (character < 0x1F00) return false;
    if (character <= 0x1FE1) {
        if (character >= 0x1F00 && character <= 0x1F07) return true;
        if (character >= 0x1F10 && character <= 0x1F15) return true;
        if (character >= 0x1F20 && character <= 0x1F27) return true;
        if (character >= 0x1F30 && character <= 0x1F37) return true;
        if (character >= 0x1F40 && character <= 0x1F45) return true;
        if (character >= 0x1F51 && character <= 0x1F57 && isOdd == true) return true;
        if (character >= 0x1F60 && character <= 0x1F67) return true;
        if (character >= 0x1F80 && character <= 0x1F87) return true;
        if (character >= 0x1F90 && character <= 0x1F97) return true;
        if (character >= 0x1FA0 && character <= 0x1FA7) return true;
        if (character == 0x1FB0) return true;
        if (character == 0x1FB1) return true;
        if (character == 0x1FD0) return true;
        if (character == 0x1FD1) return true;
        if (character == 0x1FE0) return true;
        if (character == 0x1FE1) return true;
    }

    // Encloded Alphanumerics
    if (character < 0x24D0) return false;
    if (character <= 0x24E9) {
        return true;
    }

    // Halwidth and Fullwidth Forms
    if (character < 0xFF41) return false;
    if (character <= 0xFF5A) {
        return true;
    }

    // Must be something other than lower case
    return false;
}

/**
 * unicode_case_is_upper
 */
bool unicode_case_is_upper(wchar_t character) {
    // Basic Latin
    if (character < 0x0041) return false;
    if (character <= 0x005A) return true;

    // Latin 1 Supplement
    if (character < 0x00C0) return false;
    if (character <= 0x00DE && character != 0x00D7) return true;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0100) return false;
    if (character <= 0x017D) {
        if (character >= 0x0100 && character <= 0x0136 && isOdd == false) return true;
        if (character >= 0x0139 && character <= 0x0147 && isOdd == true) return true;
        if (character >= 0x014A && character <= 0x0178 && isOdd == false) return true;
        if (character >= 0x0179 && character <= 0x017D && isOdd == true) return true;
    }

    // Latin Extended B
    if (character < 0x0181) return false;
    if (character <= 0x024E) {
        if (character == 0x0181) return true;
        if (character >= 0x0182 && character <= 0x0186 && isOdd == false) return true;
        if (character == 0x0187) return true;
        if (character >= 0x0189 && character <= 0x018B) return true;
        if (character >= 0x018E && character <= 0x0191) return true;
        if (character >= 0x0193 && character <= 0x0198 && character != 0x0195) return true;
        if (character == 0x019C) return true;
        if (character == 0x019D) return true;
        if (character == 0x019F) return true;
        if (character >= 0x01A0 && character <= 0x01A6 && isOdd == false) return true;
        if (character == 0x01A7) return true;
        if (character == 0x01AC) return true;
        if (character == 0x01AE) return true;
        if (character == 0x01AF) return true;
        if (character >= 0x01B1 && character <= 0x01B3) return true;
        if (character == 0x01B5) return true;
        if (character == 0x01B7) return true;
        if (character == 0x01B8) return true;
        if (character == 0x01BC) return true;
        if (character == 0x01C4) return true;
        if (character == 0x01C7) return true;
        if (character == 0x01CA) return true;
        if (character >= 0x01CD && character <= 0x01DB && isOdd == true) return true;
        if (character >= 0x01DE && character <= 0x01EE && isOdd == false) return true;
        if (character == 0x01F1) return true;
        if (character == 0x01F4) return true;
        if (character == 0x01F7) return true;
        if (character >= 0x01F8 && character <= 0x01FE && isOdd == false) return true;
        if (character >= 0x0200 && character <= 0x021E && isOdd == false) return true;
        if (character >= 0x0220 && character <= 0x0232 && isOdd == false) return true;
        if (character == 0x023B) return true;
        if (character == 0x023D) return true;
        if (character == 0x0241) return true;
        if (character >= 0x0243 && character <= 0x0245) return true;
        if (character >= 0x0246 && character <= 0x024E && isOdd == false) return true;
    }

    // IPA Extensions
    if (character == 0x0283) return true;

    // Spacing Modifier Letters
    if (character == 0x02C0) return true;

    // Greek and Coptic
    if (character < 0x0386) return false;
    if (character <= 0x03EE) {
        if (character == 0x0386) return true;
        if (character >= 0x0388 && character <= 0x038A) return true;
        if (character == 0x038C) return true;
        if (character == 0x038E) return true;
        if (character == 0x038F) return true;
        if (character >= 0x0391 && character <= 0x03A1) return true;
        if (character >= 0x03A3 && character <= 0x03AB) return true;
        if (character >= 0x03E2 && character <= 0x03EE && isOdd == false) return true;
    }

    // Cyrillic
    if (character < 0x0401) return false;
    if (character <= 0x04F8) {
        if (character >= 0x0401 && character <= 0x040C) return true;
        if (character >= 0x040E && character <= 0x042F) return true;
        if (character >= 0x0460 && character <= 0x0480 && isOdd == false) return true;
        if (character >= 0x0490 && character <= 0x04BE && isOdd == false) return true;
        if (character == 0x04C1) return true;
        if (character == 0x04C3) return true;
        if (character == 0x04C7) return true;
        if (character == 0x04CB) return true;
        if (character >= 0x04D0 && character <= 0x04EA && isOdd == false) return true;
        if (character == 0x04EA) return true;
        if (character >= 0x04EE && character <= 0x04F4 && isOdd == false) return true;
        if (character == 0x04F8) return true;
    }

    // Armenian
    if (character < 0x0531) return false;
    if (character <= 0x0556) {
        return true;
    }

    // Georgin
    if (character < 0x10A0) return false;
    if (character <= 0x10C5) {
        return true;
    }

    // Latin Extended Additional
    if (character < 0x1E00) return false;
    if (character <= 0x1EF8) {
        if (character >= 0x1E00 && character <= 0x1E94 && isOdd == false) return true;
        if (character >= 0x1E9E && character <= 0x1EF8 && isOdd == false) return true;
    }

    // Greek Extended
    if (character < 0x1F08) return false;
    if (character <= 0x1FE9) {
        if (character >= 0x1F08 && character <= 0x1F0F) return true;
        if (character >= 0x1F18 && character <= 0x1F1D) return true;
        if (character >= 0x1F28 && character <= 0x1F2F) return true;
        if (character >= 0x1F38 && character <= 0x1F3F) return true;
        if (character >= 0x1F48 && character <= 0x1F4D) return true;
        if (character >= 0x1F59 && character <= 0x1F5F && isOdd == true) return true;
        if (character >= 0x1F68 && character <= 0x1F6F) return true;
        if (character >= 0x1F88 && character <= 0x1F8F) return true;
        if (character >= 0x1F98 && character <= 0x1F9F) return true;
        if (character >= 0x1FA8 && character <= 0x1FAF) return true;
        if (character == 0x1FB8) return true;
        if (character == 0x1FB9) return true;
        if (character == 0x1FD8) return true;
        if (character == 0x1FD9) return true;        
        if (character == 0x1FE8) return true;
        if (character == 0x1FE9) return true;
    }

    // Encloded Alphanumerics
    if (character < 0x24B6) return false;
    if (character <= 0x24CF) {
        return true;
    }

    // Latin Extended C
    if (character < 0x2C64) return false;
    if (character <= 0x2C7F) {
        if (character == 0x2C64) return true;
        if (character >= 0x2C6D && character <= 0x2C70) return true;
        if (character == 0x2C7E) return true;
        if (character == 0x2C7F) return true;
    }

    // Latin Extended D
    if (character < 0xA78D) return false;
    if (character == 0xA78D) return true;
    if (character == 0xA7AE) return true;

    // Halfwidth and Fullwidth Forms
    if (character < 0xFF21) return false;
    if (character <= 0xFF3A) {
        return true;
    }

    // Must be something other than upper case
    return false;
}

/**
 * unicode_case_to_lower
 *
 */
wchar_t unicode_case_to_lower(wchar_t character) {
    // Basic Latin
    if (character < 0x0041) return character;
    if (character <= 0x005A) return character + 0x20;

    // Latin 1 Supplement
    if (character < 0x00C0) return character;
    if (character <= 0x00DE && character != 0x00D7) return character + 0x20;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0100) return character;
    if (character <= 0x017D) {
        if (character >= 0x0100 && character <= 0x0136 && isOdd == false) return character + 1;
        if (character >= 0x0139 && character <= 0x0147 && isOdd == true) return character + 1;
        if (character >= 0x014A && character <= 0x0176 && isOdd == false) return character + 1;
        if (character == 0x0178) return 0x00FF;
        if (character >= 0x0179 && character <= 0x017D && isOdd == true) return character + 1;
    }

    // Latin Extended B
    if (character < 0x0181) return character;
    if (character <= 0x024E) {
        if (character == 0x0181) return 0x0253;
        if (character == 0x0182) return 0x0183;
        if (character == 0x0184) return 0x0185;
        if (character == 0x0186) return 0x0254;
        if (character == 0x0187) return 0x0188;
        if (character == 0x0189) return 0x0256;
        if (character == 0x018A) return 0x0257;
        if (character == 0x018B) return 0x018C;
        if (character == 0x018E) return 0x0258;
        if (character == 0x018F) return 0x0259;
        if (character == 0x0190) return 0x025B;
        if (character == 0x0191) return 0x0192;
        if (character == 0x0193) return 0x0260;
        if (character == 0x0194) return 0x0263;
        if (character == 0x0196) return 0x0269;
        if (character == 0x0197) return 0x0268;
        if (character == 0x0198) return 0x0199;
        if (character == 0x019C) return 0x026F;
        if (character == 0x019D) return 0x0272;
        if (character == 0x019F) return 0x0275;
        if (character == 0x01A0) return 0x01A1;
        if (character == 0x01A2) return 0x01A3;
        if (character == 0x01A4) return 0x01A5;
        if (character == 0x01A6) return 0x0280;
        if (character == 0x01A7) return 0x01A8;
        if (character == 0x01AC) return 0x01AD;
        if (character == 0x01AE) return 0x0288;
        if (character == 0x01AF) return 0x01B0;
        if (character == 0x01B1) return 0x028A;
        if (character == 0x01B2) return 0x028B;
        if (character == 0x01B3) return 0x01B4;
        if (character == 0x01B5) return 0x01B6;
        if (character == 0x01B7) return 0x0292;
        if (character == 0x01B8) return 0x01B9;
        if (character == 0x01BC) return 0x01BD;
        if (character == 0x01C4) return 0x01C6;
        if (character == 0x01C7) return 0x01C9;
        if (character == 0x01CA) return 0x01CC;
        if (character >= 0x01CD && character <= 0x01DB && isOdd == true) return character + 1;
        if (character >= 0x01DE && character <= 0x01EE && isOdd == false) return character + 1;
        if (character == 0x01F1) return 0x01F3;
        if (character == 0x01F4) return 0x01F5;
        if (character == 0x01F7) return 0x01BF;
        if (character >= 0x01F8 && character <= 0x01FE && isOdd == false) return character + 1;
        if (character >= 0x0200 && character <= 0x021E && isOdd == false) return character + 1;
        if (character == 0x0220) return 0x019E;
        if (character >= 0x0222 && character <= 0x0232 && isOdd == false) return character + 1;
        if (character == 0x023B) return 0x023C;
        if (character == 0x023D) return 0x019A;
        if (character == 0x0241) return 0x0242;
        if (character == 0x0243) return 0x0180;
        if (character == 0x0244) return 0x0289;
        if (character == 0x0245) return 0x028C;
        if (character >= 0x0246 && character <= 0x024E && isOdd == false) return character + 1;
    }

    // IPA Extensions
    if (character == 0x0283) return 0x01A9;

    // Spacing Modifier Letters
    if (character == 0x02C0) return 0x0294;

    // Greek and Coptic
    if (character < 0x0386) return character;
    if (character <= 0x03EE) {
        if (character == 0x0386) return 0x03AC;
        if (character >= 0x0388 && character <= 0x038A) return character + 0x25;
        if (character == 0x038C) return 0x03CC;
        if (character == 0x038E) return 0x03CD;
        if (character == 0x038F) return 0x03CE;
        if (character >= 0x0391 && character <= 0x03A1) return character + 0x20;
        if (character >= 0x03A3 && character <= 0x03AB) return character + 0x20;
        if (character >= 0x03E2 && character <= 0x03EE && isOdd == false) return character + 1;
    }

    // Cyrillic
    if (character < 0x0401) return character;
    if (character <= 0x04F8) {
        if (character >= 0x0401 && character <= 0x040C) return character + 0x50;
        if (character == 0x040E) return 0x045E;
        if (character == 0x040F) return 0x045F;
        if (character >= 0x0410 && character <= 0x042F) return character + 0x20;
        if (character >= 0x0460 && character <= 0x0480 && isOdd == false) return character + 1;
        if (character >= 0x0490 && character <= 0x04BE && isOdd == false) return character + 1;
        if (character == 0x04C1) return 0x04C2;
        if (character == 0x04C3) return 0x04C4;
        if (character == 0x04C7) return 0x04C8;
        if (character == 0x04CB) return 0x04CC;
        if (character >= 0x04D0 && character <= 0x04EA && isOdd == false) return character + 1;
        if (character == 0x04EA) return 0x04EB;
        if (character >= 0x04EE && character <= 0x04F4 && isOdd == false) return character + 1;
        if (character == 0x04F8) return 0x04F9;
    }

    // Armenian
    if (character < 0x0531) return character;
    if (character <= 0x0556) {
        return character + 0x30;
    }

    // Georgin
    if (character < 0x10A0) return character;
    if (character <= 0x10C5) {
        return character + 0x30;
    }

    // Latin Extended Additional
    if (character < 0x1E00) return character;
    if (character <= 0x1EF8) {
        if (character >= 0x1E00 && character <= 0x1E94 && isOdd == false) return character + 1;
        if (character == 0x1E9E) return 0x00DF;
        if (character >= 0x1EA0 && character <= 0x1EF8 && isOdd == false) return character + 1;
    }

    // Greek Extended
    if (character < 0x1F08) return character;
    if (character <= 0x1FE9) {
        if (character >= 0x1F08 && character <= 0x1F0F) return character - 8;
        if (character >= 0x1F18 && character <= 0x1F1D) return character - 8;
        if (character >= 0x1F28 && character <= 0x1F2F) return character - 8;
        if (character >= 0x1F38 && character <= 0x1F3F) return character - 8;
        if (character >= 0x1F48 && character <= 0x1F4D) return character - 8;
        if (character >= 0x1F59 && character <= 0x1F5F && isOdd == true) return character - 8;
        if (character >= 0x1F68 && character <= 0x1F6F) return character - 8;
        if (character >= 0x1F88 && character <= 0x1F8F) return character - 8;
        if (character >= 0x1F98 && character <= 0x1F9F) return character - 8;
        if (character >= 0x1FA8 && character <= 0x1FAF) return character - 8;
        if (character == 0x1FB8) return 0x1FB0;
        if (character == 0x1FB9) return 0x1FB1;
        if (character == 0x1FD8) return 0x1FD0;
        if (character == 0x1FD9) return 0x1FD1;        
        if (character == 0x1FE8) return 0x1FE0;
        if (character == 0x1FE9) return 0x1FE1;
    }

    // Encloded Alphanumerics
    if (character < 0x24B6) return character;
    if (character <= 0x24CF) {
        return character + 0x1A;
    }

    // Latin Extended C
    if (character < 0x2C64) return character;
    if (character <= 0x2C7F) {
        if (character == 0x2C64) return 0x027D;
        if (character == 0x2C6D) return 0x0251;
        if (character == 0x2C6E) return 0x0271;
        if (character == 0x2C6F) return 0x0250;
        if (character == 0x2C70) return 0x0252;
        if (character == 0x2C7E) return 0x023F;
        if (character == 0x2C7F) return 0x0240;
    }

    // Latin Extended D
    if (character < 0xA78D) return character;
    if (character == 0xA78D) return 0x0265;
    if (character == 0xA7AE) return 0x026A;

    // Halfwidth and Fullwidth Forms
    if (character < 0xFF21) return character;
    if (character <= 0xFF3A) {
        return character + 0x20;
    }

    // Got to the end therefore already lower case or something else
    return character;
}

/**
 * unicode_case_to_upper
 *
 */
wchar_t unicode_case_to_upper(wchar_t character) {
    // Basic Latin
    if (character < 0x0061) return character;
    if (character <= 0x007A) return character - 0x20;

    // Latin 1 Supplement
    if (character == 0x00DF) return 0x1E9E;
    if (character < 0x00E0) return character;    
    if (character <= 0x00FE && character != 0x00F7) return character - 0x20;
    if (character == 0x00FF) return 0x0178;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0101) return character;
    if (character <= 0x017E) {
        if (character >= 0x0101 && character <= 0x0137 && isOdd == true) return character - 1;
        if (character >= 0x013A && character <= 0x0148 && isOdd == false) return character - 1;
        if (character >= 0x014B && character <= 0x0177 && isOdd == true) return character - 1;
        if (character >= 0x017A && character <= 0x017E && isOdd == false) return character - 1;
    }

    // Latin Extended B and IPA Extensions
    if (character < 0x0180) return character;
    if (character <= 0x0294) {
        if (character == 0x0180) return 0x0243;
        if (character >= 0x0183 && character <= 0x0185 && isOdd == true) return character - 1;
        if (character == 0x0188) return 0x0187;
        if (character == 0x018C) return 0x018B;
        if (character == 0x0192) return 0x0191;
        if (character == 0x0199) return 0x0198;
        if (character == 0x019A) return 0x023D;
        if (character == 0x019E) return 0x0220;
        if (character >= 0x01A1 && character <= 0x01A5 && isOdd == true) return character - 1;
        if (character == 0x01A8) return 0x01A7;
        if (character == 0x01A9) return 0x0283;
        if (character == 0x01AD) return 0x01AC;
        if (character == 0x01B0) return 0x01AF;
        if (character == 0x01B4) return 0x01B3;
        if (character == 0x01B6) return 0x01B5;
        if (character == 0x01B9) return 0x01B8;
        if (character == 0x01BD) return 0x01BC;
        if (character == 0x01BF) return 0x01F7;
        if (character == 0x01C6) return 0x01C4;
        if (character == 0x01C9) return 0x01C7;
        if (character == 0x01CC) return 0x01CA;
        if (character >= 0x01CE && character <= 0x01DC && isOdd == false) return character - 1;
        if (character >= 0x01DF && character <= 0x01EF && isOdd == true) return character - 1;
        if (character == 0x01F3) return 0x01F1;
        if (character == 0x01F5) return 0x01F4;
        if (character >= 0x01F9 && character <= 0x021F && isOdd == true) return character - 1;
        if (character >= 0x0223 && character <= 0x0233 && isOdd == true) return character - 1;
        if (character == 0x023C) return 0x023B;
        if (character == 0x023F) return 0x2C7E;
        if (character == 0x0240) return 0x2C7F;
        if (character == 0x0242) return 0x0241;
        if (character >= 0x0247 && character <= 0x024F && isOdd == true) return character - 1;
        if (character == 0x0250) return 0x2C6F;
        if (character == 0x0251) return 0x2C6D;
        if (character == 0x0252) return 0x2C70;
        if (character == 0x0253) return 0x0181;
        if (character == 0x0254) return 0x0186;
        if (character == 0x0256) return 0x0189;
        if (character == 0x0257) return 0x018A;
        if (character == 0x0258) return 0x018E;
        if (character == 0x0259) return 0x018F;
        if (character == 0x025B) return 0x0190;
        if (character == 0x0260) return 0x0193;
        if (character == 0x0263) return 0x0194;
        if (character == 0x0265) return 0xA78D;
        if (character == 0x0268) return 0x0197;
        if (character == 0x0269) return 0x0196;
        if (character == 0x026A) return 0xA7AE;
        if (character == 0x026F) return 0x019C;
        if (character == 0x0271) return 0x2C6E;
        if (character == 0x0272) return 0x019D;
        if (character == 0x0275) return 0x019F;
        if (character == 0x027D) return 0x2C64;
        if (character == 0x0280) return 0x01A6;
        if (character == 0x0288) return 0x01AE;
        if (character == 0x0289) return 0x0244;
        if (character == 0x028A) return 0x01B1;
        if (character == 0x028B) return 0x01B2;
        if (character == 0x028C) return 0x0245;
        if (character == 0x0292) return 0x01B7;
        if (character == 0x0294) return 0x02C0;        
    }

    // Greek and Coptic
    if (character < 0x03AC) return character;
    if (character <= 0x03EF) {
        if (character == 0x03AC) return 0x0386;
        if (character >= 0x03AD && character <= 0x03AF) return character - 0x25;
        if (character >= 0x03B1 && character <= 0x03C1) return character - 0x20;
        if (character >= 0x03C3 && character <= 0x03CB) return character - 0x20;
        if (character == 0x03CC) return 0x038C;
        if (character == 0x03CD) return 0x038E;
        if (character == 0x03CE) return 0x038F;
        if (character >= 0x03E3 && character <= 0x03EF && isOdd == true) return character - 1;
    }

    // Cyrillic
    if (character < 0x0430) return character;
    if (character <= 0x04F9) {
        if (character >= 0x0430 && character <= 0x044F) return character - 0x20;
        if (character >= 0x0451 && character <= 0x045C) return character - 0x50;
        if (character == 0x045E) return 0x040E;
        if (character == 0x045F) return 0x040F;
        if (character >= 0x0461 && character <= 0x0481 && isOdd == true) return character - 1;
        if (character >= 0x0491 && character <= 0x04BF && isOdd == true) return character - 1;
        if (character == 0x04C2) return 0x04C1;
        if (character == 0x04C4) return 0x04C3;
        if (character == 0x04C8) return 0x04C7;
        if (character == 0x04CC) return 0x04CB;
        if (character >= 0x04D1 && character <= 0x04EB && isOdd == true) return character - 1;
        if (character >= 0x04EF && character <= 0x04F5 && isOdd == true) return character - 1;
        if (character == 0x04F9) return 0x04F8;
    }

    // Armenian
    if (character < 0x0561) return character;
    if (character <= 0x0586) {
        return character - 0x30;
    }

    // Georgian
    if (character < 0x10D0) return character;
    if (character <= 0x10F5) {
        return character - 0x30;
    }

    // Latin Extended Additional
    if (character < 0x1E01) return character;
    if (character <= 0x1EF9) {
        if (character >= 0x1E01 && character <= 0x1E95 && isOdd == true) return character - 1;
        if (character >= 0x1EA1 && character <= 0x1EF9 && isOdd == true) return character - 1;
    }

    // Greek Extended
    if (character < 0x1F00) return character;
    if (character <= 0x1FE1) {
        if (character >= 0x1F00 && character <= 0x1F07) return character + 8;
        if (character >= 0x1F10 && character <= 0x1F15) return character + 8;
        if (character >= 0x1F20 && character <= 0x1F27) return character + 8;
        if (character >= 0x1F30 && character <= 0x1F37) return character + 8;
        if (character >= 0x1F40 && character <= 0x1F45) return character + 8;
        if (character >= 0x1F51 && character <= 0x1F57 && isOdd == true) return character + 8;
        if (character >= 0x1F60 && character <= 0x1F67) return character + 8;
        if (character >= 0x1F80 && character <= 0x1F87) return character + 8;
        if (character >= 0x1F90 && character <= 0x1F97) return character + 8;
        if (character >= 0x1FA0 && character <= 0x1FA7) return character + 8;
        if (character == 0x1FB0) return 0x1FB8;
        if (character == 0x1FB1) return 0x1FB9;
        if (character == 0x1FD0) return 0x1FD8;
        if (character == 0x1FD1) return 0x1FD9;
        if (character == 0x1FE0) return 0x1FE8;
        if (character == 0x1FE1) return 0x1FE9;
    }

    // Encloded Alphanumerics
    if (character < 0x24D0) return character;
    if (character <= 0x24E9) {
        return character - 0x1A;
    }

    // Halwidth and Fullwidth Forms
    if (character < 0xFF41) return character;
    if (character <= 0xFF5A) {
        return character - 0x20;
    }

    // Got to the end therefore already lower case or something else
    return character;
}

