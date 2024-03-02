# Unicode Case Convertion

Information and code relating to the changing of Unicode characters between lower and upper case.

UTF-8 can encode all the unicode characters used around the world. Converting some of the characters from lower case to upper case or vice versa can seem easy to start with but you need to take foreign languages into account.

This contains the following functions.

|Name|Details|
|---|---|
|`unicode_case_is_lower`|Tests to see if the given character is a lower case character or not.|
|`unicode_case_is_update`|Tests to see if the given character is a upper case character or not.|
|`unicode_case_to_lower`|Returns the given character or the lower case version of it.|
|`unicode_case_to_upper`|Returns the given character or the upper case version of it.|

The functions are written in `C/C++` and `WebAssembly WAT`.

This also contains test data you can use to check your code. Included is the following.

|Name|Details|
|---|---|
|`allLowerCaseCharacters`|A string contains all the lower case characters.|
|`allUpperCaseCharacters`|A string contains all the upper case characters.|
|`lowerUpperCasePairList`|List of all the lower case characters with their upper case pair.|


## Notes

- There are some characters that are called lower case but have no upper case version. These are not included in the functions. For example, calling `uncode_case_is_lower` on one of these characters will return false, even though they are technically lower case.
- There are two lists. The lower to upper case which is ordered by the lower case character. The upper to lower case which is ordered by the upper case character.
- There are currently 706 unicode characters handled.




