## Problem Statement:
Given a string `s`, find the length of the longest substring without repeating characters.

### Approach:
1. Use a sliding window approach to efficiently solve the problem.
2. Maintain two pointers, `start` and `end`, representing the start and end of the current substring without repeating characters.
3. Use a data structure (in this case, an `unordered_map` named `charIndex`) to keep track of the last index where each character was seen.
4. Iterate through the string, updating the `end` pointer and updating the `charIndex` map.
5. If a repeating character is found, update the `start` pointer to the next position after the last occurrence of the repeating character.
6. Keep track of the length of the current substring without repeating characters.
7. Update the result with the maximum length encountered so far.

### Code Explanation:
- The `charIndex` map is used to store the last index of each character encountered in the string.
- The `start` pointer is updated when a repeating character is found.
- The length of the current substring without repeating characters is calculated as `i - start + 1`.
- The result is updated with the maximum length encountered so far.

### Time Complexity:
The time complexity of the solution is O(n), where n is the length of the input string. This is because we iterate through the string only once.

### Space Complexity:
The space complexity is O(min(m, n)), where m is the size of the character set (in this case, the number of unique characters in the input string), and n is the length of the input string. The space is used to store the `charIndex` map.

In summary, the code efficiently finds the length of the longest substring without repeating characters using a sliding window approach and a hash map to keep track of character indices.
