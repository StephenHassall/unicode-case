/**
 * Test unicode-case functions using the test data.
 */

import { allLowerCaseCharacters } from "./test-data.js";
import { allUpperCaseCharacters } from "./test-data.js";
import { lowerUpperCasePairList } from "./test-data.js";
import UnicodeCase from './unicode-case.js';

// Define the range of unicode characters to scan
const UNICODE_CHARACTER_FROM = 0x0001;
const UNICODE_CHARACTER_TO = 0xFFFF;

// Create unicode case object
const unicodeCase = new UnicodeCase();

/**
 * Test the isLower function.
 */
const testIsLower = function () {
    // For each unicode character
    for (let character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to perform a manual check, using the list of lower and upper case
        // pairs, to see if the character is lower case or not

        // Set manual found as not not found yet
        let manualFound = false;

        // For each lower upper case pair
        for (let index = 0; index < lowerUpperCasePairList.length; index++) {
            // Get lower upper case pair
            let pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.lowerChar != character) continue;

            // Set manual found and stop looking
            manualFound = true;
            break;
        }

        // The next step is to call the isLower function with the character and see
        // what the function thinks of the character
        let functionFound = unicodeCase.isLower(character);

        // The final step is to make sure both found values are the same
        if (functionFound == manualFound) continue;

        // If we get here then there is an error
        console.log("isLower error: 0x" + character.toString(16));

        // Stop here
        return;
    }
}

/**
 * Test the isUpper function.
 */
const testIsUpper = function () {
    // For each unicode character
    for (let character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to perform a manual check, using the list of lower and upper case
        // pairs, to see if the character is upper case or not

        // Set manual found as not not found yet
        let manualFound = false;

        // For each lower upper case pair
        for (let index = 0; index < lowerUpperCasePairList.length; index++) {
            // Get lower upper case pair
            let pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.upperChar != character) continue;

            // Set manual found and stop looking
            manualFound = true;
            break;
        }

        // The next step is to call the isUpper function with the character and see
        // what the function thinks of the character
        let functionFound = unicodeCase.isUpper(character);

        // The final step is to make sure both found values are the same
        if (functionFound == manualFound) continue;

        // If we get here then there is an error
        console.log("isUpper error: 0x" + character.toString(16));

        // Stop here
        return;
    }
}

/**
 * Test the toLower function.
 */
const testToLower = function () {
    // For each unicode character
    for (let character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to look for the pair that has a upper case character

        // Set found pair
        let foundPair = null;

        // For each lower upper case pair
        for (let index = 0; index < lowerUpperCasePairList.length; index++) {
            // Get lower upper case pair
            let pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.upperChar != character) continue;

            // Set found pair and stop looking
            foundPair = pair;
            break;
        }

        // The next step is to call the toLower function with the character and see
        // what the function thinks the lower case character is
        const lowerCaseCharacter = unicodeCase.toLower(character);

        // If no pair was found
        if (foundPair === null) {
            // Make sure the lower case character is the same as the starting character
            if (lowerCaseCharacter !== character) {
                // Log error and stop
                console.log('toLower error 0x' + character.toString(16) + ' > 0x' + lowerCaseCharacter.toString(16));
                return;
            }

            // Move on to the next character
            continue;
        }

        // If the lower case character matches the one in the pair
        if (lowerCaseCharacter === foundPair.lowerChar) continue;

        // Log error and stop
        console.log('toLower error 0x' + character.toString(16) + ' > 0x' + lowerCaseCharacter.toString(16) + ' ? 0x' + foundPair.lowerChar.toString(16));

        // Stop here
        return;
    }
}

/**
 * Test the toUpper function.
 */
const testToUpper = function () {
    // For each unicode character
    for (let character = UNICODE_CHARACTER_FROM; character <= UNICODE_CHARACTER_TO; character++) {
        // First step is to look for the pair that has a lower case character

        // Set found pair
        let foundPair = null;

        // For each lower upper case pair
        for (let index = 0; index < lowerUpperCasePairList.length; index++) {
            // Get lower upper case pair
            let pair = lowerUpperCasePairList[index];

            // If not found
            if (pair.lowerChar != character) continue;

            // Set found pair and stop looking
            foundPair = pair;
            break;
        }

        // The next step is to call the toUpper function with the character and see
        // what the function thinks the upper case character is
        const upperCaseCharacter = unicodeCase.toUpper(character);

        // If no pair was found
        if (foundPair === null) {
            // Make sure the upper case character is the same as the starting character
            if (upperCaseCharacter !== character) {
                // Log error and stop
                console.log('toLower error 0x' + character.toString(16) + ' > 0x' + upperCaseCharacter.toString(16));
                return;
            }

            // Move on to the next character
            continue;
        }

        // If the upper case character matches the one in the pair
        if (upperCaseCharacter === foundPair.upperChar) continue;

        // Log error and stop
        console.log('toUpper error 0x' + character.toString(16) + ' > 0x' + upperCaseCharacter.toString(16) + ' ? 0x' + foundPair.upperChar.toString(16));

        // Stop here
        return;
    }
}

/**
 * Test the converting all lower case characters to upper case.
 */
const testLowerToUpper = function () {
    // Create array for upper case
    const upperCaseList = [];

    // For each lower case character
    for (let index = 0; index < allLowerCaseCharacters.length; index++) {
        // Get lower case code points
        const lowerCaseCodePoint = allLowerCaseCharacters.codePointAt(index);

        // Convert to upper case
        const upperCaseCodePoint = unicodeCase.toUpper(lowerCaseCodePoint);

        // Add to upper case list
        upperCaseList.push(String.fromCodePoint(upperCaseCodePoint));
    }

    // Create the resulting upper case string
    const upperCase = upperCaseList.join('');

    // Compare the converted lower case to upper case string to the testing one
    if (upperCase === allUpperCaseCharacters) return;
    
    // Log error
    console.log('LowerToUpper error:\n' + upperCase + '\n' + allUpperCaseCharacters);
}

/**
 * Test the converting all upper case characters to lower case.
 */
const testUpperToLower = function () {
    // Create array for lower case
    const lowerCaseList = [];

    // For each upper case character
    for (let index = 0; index < allUpperCaseCharacters.length; index++) {
        // Get upper case code points
        const upperCaseCodePoint = allUpperCaseCharacters.codePointAt(index);

        // Convert to lower case
        const lowerCaseCodePoint = unicodeCase.toLower(upperCaseCodePoint);

        // Add to lower case list
        lowerCaseList.push(String.fromCodePoint(lowerCaseCodePoint));
    }

    // Create the resulting lower case string
    const lowerCase = lowerCaseList.join('');

    // Compare the converted upper case to lower case string to the testing one
    if (lowerCase === allLowerCaseCharacters) return;
    
    // Log error
    console.log('UpperToLower error:\n' + lowerCase + '\n' + allLowerCaseCharacters);
}

/**
 * Perform all the tests
 */
const run = async function() {
    // Load unicode case
    await unicodeCase.load();

    // Perform the tests
    testIsLower();
    testIsUpper();
    testToLower();
    testToUpper();
    testLowerToUpper();
    testUpperToLower();

    // Log finished
    console.log('Finished');
}();
