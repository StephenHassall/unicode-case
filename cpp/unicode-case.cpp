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
    if (character >= 0x0061 && character <= 0x007A) return true;

    // Latin 1 Supplement
    if (character < 0x00DF) return false;
    if (character >= 0x00DF && character <= 0x00FF && character != 0x00F7) return true;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0101) return false;
    if (character >= 0x0101 && character <= 0x017E) {
        if (character >= 0x0101 && character <= 0x0137 && isOdd == true) return true;
        if (character >= 0x013A && character <= 0x0148 && isOdd == false) return true;
        if (character >= 0x014B && character <= 0x0177 && isOdd == true) return true;
        if (character >= 0x017A && character <= 0x017E && isOdd == false) return true;
    }

    // Latin Extended B and IPA Extensions
    if (character < 0x0180) return false;
    if (character >= 0x0180 && character <= 0x0292) {
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
        if (character >= 0x0250 && character <= 0x0259 && character != 0x0254) return true;
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
    if (character >= 0x03AC && character <= 0x03EF) {
        if (character >= 0x03AC && character <= 0x03AF) return true;
        if (character >= 0x03B1 && character <= 0x03C1) return true;
        if (character >= 0x03C3 && character <= 0x03CE) return true;
        if (character >= 0x03E3 && character <= 0x03EF && isOdd == true) return true;
    }

    // Cyrillic
    if (character < 0x0430) return false;
    if (character >= 0x0430 && character <= 0x04F9) {
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
    if (character >= 0x0561 && character <= 0x0586) {
        return true;
    }

    // Georgian
    if (character < 0x10D0) return false;
    if (character >= 0x10D0 && character <= 0x10F5) {
        return true;
    }

    // Latin Extended Additional
    if (character < 0x1E01) return false;
    if (character >= 0x1E01 && character <= 0x1EF9) {
        if (character >= 0x1E01 && character <= 0x1E95 && isOdd == true) return true;
        if (character >= 0x1EA1 && character <= 0x1EF9 && isOdd == true) return true;
    }

    // Greek Extended
    if (character < 0x1F00) return false;
    if (character >= 0x1F00 && character <= 0x1FE1) {
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
        if (character >= 0x1FB0) return true;
        if (character >= 0x1FB1) return true;
        if (character >= 0x1FD0) return true;
        if (character >= 0x1FD1) return true;
        if (character >= 0x1FF0) return true;
        if (character >= 0x1FF1) return true;
    }

    // Encloded Alphanumerics
    if (character < 0x24D0) return false;
    if (character >= 0x24D0 && character <= 0x24E9) {
        return;
    }

    // Halwidth and Fullwidth Forms
    if (character < 0xFF41) return false;
    if (character >= 0xFF41 && character <= 0xFF5A) {
        return;
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
    if (character >= 0x0041 && character <= 0x005A) return true;

    // Latin 1 Supplement
    if (character < 0x00C0) return false;
    if (character >= 0x00C0 && character <= 0x00DE && character != 0x00D7) return true;
    if (character == 0x1E9E) return true;
    if (character == 0x0178) return true;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0100) return false;
    if (character >= 0x0100 && character <= 0x017D) {
        if (character >= 0x0100 && character <= 0x0136 && isOdd == false) return true;
        if (character >= 0x0139 && character <= 0x0147 && isOdd == true) return true;
        if (character >= 0x014A && character <= 0x0176 && isOdd == false) return true;
        if (character >= 0x0179 && character <= 0x017D && isOdd == true) return true;
    }

    // Latin Extended B
    if (character < 0x0180) return false;
    if (character >= 0x0180 && character <= 0x024F) {
        if (character >= 0x0182 && character <= 0x0184 && isOdd == false) return true;
        if (character == 0x0187) return true;
        if (character == 0x018B) return true;
        if (character == 0x0191) return true;
        if (character == 0x0198) return true;
        if (character >= 0x01A0 && character <= 0x01A4 && isOdd == false) return true;
        if (character == 0x01A7) return true;
        if (character == 0x01AC) return true;
        if (character == 0x01AF) return true;
        if (character == 0x01B3) return true;
        if (character == 0x01B5) return true;
        if (character == 0x01B8) return true;
        if (character == 0x01BC) return true;
        if (character == 0x01C4) return true;
        if (character == 0x01C7) return true;
        if (character == 0x01CA) return true;
        if (character >= 0x01CD && character <= 0x01DB && isOdd == true) return true;
        if (character >= 0x01DE && character <= 0x01EE && isOdd == false) return true;
        if (character == 0x01F1) return true;
        if (character == 0x01F4) return true;
        if (character >= 0x01F8 && character <= 0x01FE && isOdd == false) return true;
        if (character >= 0x0200 && character <= 0x021E && isOdd == false) return true;
        if (character >= 0x0222 && character <= 0x0232 && isOdd == false) return true;
        if (character == 0x023B) return true;
        if (character == 0x0241) return true;
        if (character >= 0x0246 && character <= 0x024E && isOdd == false) return true;
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
    if (character >= 0x0041 && character <= 0x005A) return character + 0x20;

    // Latin 1 Supplement
    if (character < 0x00C0) return character;
    if (character >= 0x00C0 && character <= 0x00DE && character != 0x00D7) return character + 0x20;
    if (character == 0x1E9E) return 0x00DF;
    if (character == 0x0178) return 0x00FF;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0100) return character;
    if (character >= 0x0100 && character <= 0x017D) {
        if (character >= 0x0100 && character <= 0x0136 && isOdd == false) return character + 1;
        if (character >= 0x0139 && character <= 0x0147 && isOdd == true) return character + 1;
        if (character >= 0x014A && character <= 0x0176 && isOdd == false) return character + 1;
        if (character >= 0x0179 && character <= 0x017D && isOdd == true) return character + 1;
    }

    // Latin Extended B
    if (character < 0x0180) return character;
    if (character >= 0x0180 && character <= 0x024F) {
        if (character >= 0x0182 && character <= 0x0184 && isOdd == false) return character + 1;
        if (character == 0x0187) return 0x0188;
        if (character == 0x018B) return 0x018C;
        if (character == 0x0191) return 0x0192;
        if (character == 0x0198) return 0x0199;
        if (character >= 0x01A0 && character <= 0x01A4 && isOdd == false) return character + 1;
        if (character == 0x01A7) return 0x01A8;
        if (character == 0x01AC) return 0x01AD;
        if (character == 0x01AF) return 0x01B0;
        if (character == 0x01B3) return 0x01B4;
        if (character == 0x01B5) return 0x01B6;
        if (character == 0x01B8) return 0x01B9;
        if (character == 0x01BC) return 0x01BD;
        if (character == 0x01C4) return 0x01C6;
        if (character == 0x01C7) return 0x01C9;
        if (character == 0x01CA) return 0x01CC;
        if (character >= 0x01CD && character <= 0x01DB && isOdd == true) return character + 1;
        if (character >= 0x01DE && character <= 0x01EE && isOdd == false) return character + 1;
        if (character == 0x01F1) return 0x01F3;
        if (character == 0x01F4) return 0x01F5;
        if (character >= 0x01F8 && character <= 0x01FE && isOdd == false) return character + 1;
        if (character >= 0x0200 && character <= 0x021E && isOdd == false) return character + 1;
        if (character >= 0x0222 && character <= 0x0232 && isOdd == false) return character + 1;
        if (character == 0x023B) return 0x023C;
        if (character == 0x0241) return 0x0242;
        if (character >= 0x0246 && character <= 0x024E && isOdd == false) return character + 1;
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
    if (character >= 0x0061  && character <= 0x007A) return character - 0x20;

    // Latin 1 Supplement
    if (character < 0x00DF) return character;
    if (character >= 0x00E0 && character <= 0x00FE && character != 0x00F7) return character - 0x20;
    if (character == 0x00DF) return 0x1E9E;
    if (character == 0x00FF) return 0x0178;

    // Set is odd
    bool isOdd = (bool)(character % 2);

    // Latin Extended A
    if (character < 0x0101) return character;
    if (character >= 0x0101 && character <= 0x017E) {
        if (character >= 0x0101 && character <= 0x0137 && isOdd == true) return character - 1;
        if (character >= 0x013A && character <= 0x0148 && isOdd == false) return character - 1;
        if (character >= 0x014B && character <= 0x0177 && isOdd == true) return character - 1;
        if (character >= 0x017A && character <= 0x017E && isOdd == false) return character - 1;
    }

    // Latin Extended B
    if (character < 0x0180) return character;
    if (character >= 0x0180 && character <= 0x024F) {
        if (character >= 0x0183 && character <= 0x0185 && isOdd == true) return character - 1;
        if (character == 0x0188) return 0x0187;
        if (character == 0x018C) return 0x018B;
        if (character == 0x0192) return 0x0191;
        if (character == 0x0199) return 0x0198;
        if (character >= 0x01A1 && character <= 0x01A5 && isOdd == true) return character - 1;
        if (character == 0x01A8) return 0x01A7;
        if (character == 0x01AD) return 0x01AC;
        if (character == 0x01B0) return 0x01AF;
        if (character == 0x01B4) return 0x01B3;
        if (character == 0x01B6) return 0x01B5;
        if (character == 0x01B9) return 0x01B8;
        if (character == 0x01BD) return 0x01BC;
        if (character == 0x01C6) return 0x01C4;
        if (character == 0x01C9) return 0x01C7;
        if (character == 0x01CC) return 0x01CA;
        if (character >= 0x01CE && character <= 0x01DC && isOdd == false) return character - 1;
        if (character >= 0x01DF && character <= 0x01EF && isOdd == true) return character - 1;
        if (character == 0x01F3) return 0x01F1;
        if (character == 0x01F5) return 0x01F4;
        if (character >= 0x01F9 && character <= 0x01FF && isOdd == true) return character - 1;
        if (character >= 0x0201 && character <= 0x021F && isOdd == true) return character - 1;
        if (character >= 0x0223 && character <= 0x0233 && isOdd == true) return character - 1;
        if (character == 0x023C) return 0x023B;
        if (character == 0x0242) return 0x0241;
        if (character >= 0x0247 && character <= 0x024F && isOdd == true) return character - 1;
    }

    // Got to the end therefore already lower case or something else
    return character;
}

