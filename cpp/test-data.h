/**
 * Unicode case test data
 */

#ifndef UNICODE_CASE_TEST_DATA
#define UNICODE_CASE_TEST_DATA

/**
 * All lower case characters as in a single string.
 */
extern const wchar_t* allLowerCaseCharacters;

/**
 * All upper case characters as in a single string.
 */
extern const wchar_t* allUpperCaseCharacters;

/**
 * Upper and lower case pairs structure.
 */
struct upperLowerCasePair
{
    wchar_t lowerText;
    unsigned long lowerChar;
    wchar_t upperText;
    unsigned long upperChar;
};

/**
 * Array of upper and lower case pairs.
 */
extern struct upperLowerCasePair upperLowerCasePairList[];

/**
 * The number of upper lower case pairs in the list
 */
extern int upperLowerCasePairListCount;

#endif