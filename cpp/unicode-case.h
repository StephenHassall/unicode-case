/**
 * Unicode case
 * 
 * Set of functions to check and convert a unicode character between lower and
 * upper case.
 */

#ifndef UNICODE_CASE
#define UNICODE_CASE

/**
 * unicode_case_is_lower
 * Checks to see if the given character (a code point) is either a lower case, or some other character.
 * @param {wchar_t} character The code point character to check.
 * @return {bool} Returns true if a lower case character, otherwise returns false.
 */
bool unicode_case_is_lower(wchar_t character);

/**
 * unicode_case_is_upper
 * Checks to see if the given character (a code point) is either an upper case, or some other character.
 * @param {wchar_t} character The code point character to check.
 * @return {bool} Returns true if an upper case character, otherwise returns false.
 */
bool unicode_case_is_upper(wchar_t character);

/**
 * unicode_case_to_lower
 * Converts the given character (a code point) into a lower case version (if required). 
 * @param {wchar_t} character The code point character to convert to lower case.
 * @return {wchar_t} The lower case version of the character (if it has changed), otherwise it is the same value.
 */
wchar_t unicode_case_to_lower(wchar_t character);

/**
 * unicode_case_to_upper
 * Converts the given character (a code point) into an upper case version (if required). 
 * @param {wchar_t} character The code point character to convert to upper case.
 * @return {wchar_t} The upper case version of the character (if it has changed), otherwise it is the same value.
 */
wchar_t unicode_case_to_upper(wchar_t character);

#endif