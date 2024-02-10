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
    if (character < 0x00E0) return false;
    if (character >= 0x00E0 && character <= 0x00FE && character != 0x00F7) return true;

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
    if (character < 0x00E0) return character;
    if (character >= 0x00E0 && character <= 0x00FE && character != 0x00F7) return character - 0x20;

    // Got to the end therefore already lower case or something else
    return character;
}

