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

    // Latin Extended B
    if (character < 0x0180) return false;
    if (character >= 0x0180 && character <= 0x024F) {
        if (character >= 0x0183 && character <= 0x0185 && isOdd == true) return true;
        if (character == 0x0188) return true;
        if (character == 0x018C) return true;
        if (character == 0x0192) return true;
        if (character == 0x0199) return true;
        if (character >= 0x01A1 && character <= 0x01A5 && isOdd == true) return true;
        if (character == 0x01A8) return true;
        if (character == 0x01AD) return true;
        if (character == 0x01B0) return true;
        if (character == 0x01B4) return true;
        if (character == 0x01B6) return true;
        if (character == 0x01B9) return true;
        if (character == 0x01BD) return true;
        if (character == 0x01C6) return true;
        if (character == 0x01C9) return true;
        if (character == 0x01CC) return true;
        if (character >= 0x01CE && character <= 0x01DC && isOdd == false) return true;
        if (character >= 0x01DF && character <= 0x01EF && isOdd == true) return true;
        if (character == 0x01F3) return true;
        if (character == 0x01F5) return true;
        if (character >= 0x01F9 && character <= 0x01FF && isOdd == true) return true;
        if (character >= 0x0201 && character <= 0x021F && isOdd == true) return true;
        if (character >= 0x0223 && character <= 0x0233 && isOdd == true) return true;
        if (character == 0x023C) return true;
        if (character == 0x0242) return true;
        if (character >= 0x0247 && character <= 0x024F && isOdd == true) return true;
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

