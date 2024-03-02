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
 * Lower and upper case pairs structure.
 */
struct lowerUpperCasePair
{
    wchar_t lowerText;
    unsigned long lowerChar;
    wchar_t upperText;
    unsigned long upperChar;
};

/**
 * Array of lower and upper case pairs.
 */
extern struct lowerUpperCasePair lowerUpperCasePairList[];

/**
 * The number of lower upper case pairs in the list
 */
extern int lowerUpperCasePairListCount;

#endif