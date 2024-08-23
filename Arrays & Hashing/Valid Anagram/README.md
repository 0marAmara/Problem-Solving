# LeetCode Problem: Valid Anagram

## Problem Description

Given two strings `s` and `t`, write a function to determine if `t` is an anagram of `s`. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

**Link to the Problem:** [https://leetcode.com/problems/valid-anagram/description]

## Approach

### Explanation
To determine if two strings are anagrams, we can compare the frequency of each character in both strings. If both strings have the same frequency for every character, then they are anagrams.

### Steps:
1. **Check Lengths:** First, check if the lengths of the two strings `s` and `t` are equal. If they are not, the strings cannot be anagrams, so return `false`.
2. **Frequency Map:** Create a frequency map (an array of size 26 for each letter of the alphabet) to store the difference in the frequency of each character between the two strings.
   - Traverse both strings simultaneously, increasing the count in the frequency map for characters in `s` and decreasing the count for characters in `t`.
3. **Check Frequency Map:** After processing both strings, check the frequency map. If any entry is not zero, it means the strings have different character frequencies and are not anagrams.

### Time Complexity
- **O(n):** The solution has linear time complexity, where `n` is the length of the strings. We traverse the strings once and use a fixed-size frequency map.

### Space Complexity
- **O(1):** The space complexity is constant because the frequency map size is fixed (26 elements) regardless of the input size.
