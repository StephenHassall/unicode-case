/**
 * Unicode case test data
 */

#ifndef UNICODE_CASE_TEST_DATA
#define UNICODE_CASE_TEST_DATA

extern const wchar_t* allLowerCaseCharacters;
extern const wchar_t* allUpperCaseCharacters;

/**
 * Array of upper and lower case pairs.
 */
struct upperLowerCasePair
{
    wchar_t lowerText;
    unsigned long lowerChar;
    wchar_t upperText;
    unsigned long upperChar;
};

extern struct upperLowerCasePair upperLowerCasePairList[];

// Number of items in the list
extern int upperLowerCasePairListSize;

#endif