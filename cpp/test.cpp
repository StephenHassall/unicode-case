/**
 * Test the unicode case functions.
 * 
 */

#include <stdio.h>
#include <wchar.h>
#include "unicode-case.h"
#include "test-data.h"

// Define the range of unicode characters to scan
#define UNICODE_CHARACTER_FROM  0x0001
#define UNICODE_CHARACTER_TO    0xFFFF

/**
 * Test the isLower function.
 */
void testIsLower() {
    // For each unicode character
    for (int character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to perform a manual check, using the list of lower and upper case
        // pairs, to see if the character is lower case or not

        // Set manual found as not not found yet
        bool manualFound = false;

        // For each lower upper case pair
        for (int index = 0; index < lowerUpperCasePairListCount; index++) {
            // Get lower upper case pair
            lowerUpperCasePair pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.lowerText != character) continue;

            // Set manual found and stop looking
            manualFound = true;
            break;
        }

        // The next step is to call the isLower function with the character and see
        // what the function thinks of the character
        bool functionFound = unicode_case_is_lower(character);

        // The final step is to make sure both found values are the same
        if (functionFound == manualFound) continue;

        // If we get here then there is an error
        printf("isLower error: 0x%04X\n", character);

        // Stop here
        return;
    }
}

/**
 * Test the isUpper function.
 */
void testIsUpper() {
    // For each unicode character
    for (int character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to perform a manual check, using the list of lower and upper case
        // pairs, to see if the character is upper case or not

        // Set manual found as not not found yet
        bool manualFound = false;

        // For each lower upper case pair
        for (int index = 0; index < lowerUpperCasePairListCount; index++) {
            // Get lower upper case pair
            lowerUpperCasePair pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.upperText != character) continue;

            // Set manual found and stop looking
            manualFound = true;
            break;
        }

        // The next step is to call the isUpper function with the character and see
        // what the function thinks of the character
        bool functionFound = unicode_case_is_upper(character);

        // The final step is to make sure both found values are the same
        if (functionFound == manualFound) continue;

        // If we get here then there is an error
        printf("isUpper error: 0x%04X\n", character);

        // Stop here
        return;
    }
}

/**
 * Test the toLower function.
 */
void testToLower() {
    // For each unicode character
    for (int character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to look for the pair that has a upper case character

        // Set found pair
        lowerUpperCasePair* foundPair = NULL;

        // For each lower upper case pair
        for (int index = 0; index < lowerUpperCasePairListCount; index++) {
            // Get lower upper case pair
            lowerUpperCasePair pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.upperChar != character) continue;

            // Set found pair and stop looking
            foundPair = &pair;
            break;
        }

        // The next step is to call the toLower function with the character and see
        // what the function thinks the lower case character is
        wchar_t lowerCaseCharacter = unicode_case_to_lower(character);

        // If no pair was found
        if (foundPair == NULL) {
            // Make sure the lower case character is the same as the starting character
            if (lowerCaseCharacter != character) {
                // Log error and stop
                printf("toLower: 0x%04X > 0x%04X\n", character, lowerCaseCharacter);
                return;
            }

            // Move on to the next character
            continue;
        }

        // If the lower case character matches the one in the pair
        if (lowerCaseCharacter == foundPair->lowerText) continue;

        // Log error and stop
        printf("toLower error 0x%04X > 0x%04X ? 0x%04X\n", character, lowerCaseCharacter, foundPair->lowerChar);

        // Stop here
        return;
    }
}

/**
 * Test the toUpper function.
 */
void testToUpper() {
    // For each unicode character
    for (int character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to look for the pair that has a lower case character

        // Set found pair
        lowerUpperCasePair* foundPair = NULL;

        // For each lower upper case pair
        for (int index = 0; index < lowerUpperCasePairListCount; index++) {
            // Get lower upper case pair
            lowerUpperCasePair pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.lowerChar != character) continue;

            // Set found pair and stop looking
            foundPair = &pair;
            break;
        }

        // The next step is to call the toUpper function with the character and see
        // what the function thinks the upper case character is
        wchar_t upperCaseCharacter = unicode_case_to_upper(character);

        // If no pair was found
        if (foundPair == NULL) {
            // Make sure the upper case character is the same as the starting character
            if (upperCaseCharacter != character) {
                // Log error and stop
                printf("toUpper: 0x%04X > 0x%04X\n", character, upperCaseCharacter);
                return;
            }

            // Move on to the next character
            continue;
        }

        // If the upper case character matches the one in the pair
        if (upperCaseCharacter == foundPair->upperText) continue;

        // Log error and stop
        printf("toUpper error 0x%04X > 0x%04X ? 0x%04X\n", character, upperCaseCharacter, foundPair->upperChar);

        // Stop here
        return;
    }
}

/**
 * Test the converting all lower case characters to upper case.
 */
void testLowerToUpper() {
    // Get the number of characters in the all lower/upper case characters string
    size_t length = wcslen(allUpperCaseCharacters);

    // Create upper case string
    wchar_t* upperCaseString = new wchar_t [length + 1];

    // For each lower case character
    for (int index = 0; index < length; index++) {
        // Get lower case character
        wchar_t lowerCaseCharacter = allLowerCaseCharacters[index];

        // Convert to upper case
        wchar_t upperCaseCharacter = unicode_case_to_upper(lowerCaseCharacter);

        // Add to upper case string
        upperCaseString[index] = upperCaseCharacter;
    }

    // Null end
    upperCaseString[length] = NULL;

    // Compare the converted lower case to upper case string to the testing one
    if (wcscmp(upperCaseString, allUpperCaseCharacters) != 0) {
        // Log error
        wprintf(L"LowerToUpper error:\n%s\n%s", upperCaseString, allUpperCaseCharacters);
    }

    // Free upper case string memory
    delete [] upperCaseString;
}

/**
 * Test the converting all upper case characters to lower case.
 */
void testUpperToLower() {
    // Get the number of characters in the all lower/upper case characters string
    size_t length = wcslen(allUpperCaseCharacters);

    // Create lower case string
    wchar_t* lowerCaseString = new wchar_t[length + 1];

    // For each upper case character
    for (int index = 0; index < length; index++) {
        // Get upper case character
        wchar_t upperCaseCharacter = allUpperCaseCharacters[index];

        // Convert to lower case
        wchar_t lowerCaseCharacter = unicode_case_to_lower(upperCaseCharacter);

        // Add to lower case string
        lowerCaseString[index] = lowerCaseCharacter;
    }

    // Null end
    lowerCaseString[length] = NULL;

    // Compare the converted upper case to lower case string to the testing one
    if (wcscmp(lowerCaseString, allLowerCaseCharacters) != 0) {
        // Log error
        wprintf(L"UpperToLower error:\n%s\n%s", lowerCaseString, allLowerCaseCharacters);
    }

    // Free lower case string memory
    delete[] lowerCaseString;
}

int main()
{
    // Perform the tests
    testIsLower();
    testIsUpper();
    testToLower();
    testToUpper();
    testLowerToUpper();
    testUpperToLower();

    // Log finished
    printf("Finished");

}
