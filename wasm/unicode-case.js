/**
 * Unicode Case
 * 
 * Functions to check if a character is lower or upper case
 * 
 */
import { readFile } from "node:fs/promises";
import path from 'path';
import { fileURLToPath } from 'url';

export default class UnicodeCase  {
    /**
     * Fetch and load the WASM file.
     * @return {Promise} A promise.
     */
    async load() {
        // Get current folder
        const __filename = fileURLToPath(import.meta.url);
        const __dirname = path.dirname(__filename);
        
        // Read WASM data
        const wasmBuffer = await readFile(__dirname + '/unicode-case.wasm');

        // Create WASM data from buffer
        const wasmData = new Uint8Array(wasmBuffer);

        // Instantiate the WASM data
        const promise = WebAssembly.instantiate(wasmData)
        .then((resultObject) => {
            // Set the module object
            this._module = resultObject.module;

            // Set the instance object
            this._instance = resultObject.instance;
        });

        // Return the promise
        return promise;
    }

    /**
     * Looks to see if the given character is lower case or not.
     * @param {Number} character The 32 bit unicode character to test.
     * @return {Boolean} The result.
     */
    isLower(character) {
        // Call the WASM unicode_case_is_lower function
        if (this._instance.exports.unicode_case_is_lower(character) === 0) return false;

        // Therefore it must be lower cas
        return true;
    }

    /**
     * Looks to see if the given character is upper case or not.
     * @param {Number} character The 32 bit unicode character to test.
     * @return {Boolean} The result.
     */
    isUpper(character) {
        // Call the WASM unicode_case_is_upper function
        if (this._instance.exports.unicode_case_is_upper(character) === 0) return false;

        // Therefore it must be upper cas
        return true;
    }

    /**
     * Converts the given character into lower case (if needed).
     * @param {Number} character The 32 bit unicode character to convert.
     * @return {Number} The lower cased character.
     */
    toLower(character) {
        // Call and return the WASM unicode_case_to_lower function
        return this._instance.exports.unicode_case_to_lower(character);
    }

    /**
     * Converts the given character into lower case (if needed).
     * @param {Number} character The 32 bit unicode character to convert.
     * @return {Number} The lower cased character.
     */
    toUpper(character) {
        // Call and return the WASM unicode_case_to_upper function
        return this._instance.exports.unicode_case_to_upper(character);
    }
}

