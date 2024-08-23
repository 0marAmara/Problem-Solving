# LeetCode Problem: Contains Duplicate

## Problem Description

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

**Link to the Problem:** [https://leetcode.com/problems/contains-duplicate/description]

## Approach

### Initial Solution (Commented Out)
In the first solution, we used a hash map to keep track of the numbers that appeared as we iterated through the list. The solution works as follows:
- For each number in the array, check if it already exists in the map.
- If it does, return `true` since this indicates a duplicate.
- If it doesn't, store the number in the map and move to the next one.
- If no duplicates are found after iterating through the array, return `false`.

**Time Complexity:** `O(n)` where `n` is the number of elements in the array.

**Space Complexity:** `O(n)` due to the storage used by the map.

### Optimized Solution (Current Implementation)
In the optimized solution, we first sort the array and then check for any consecutive duplicate elements.

- **Sorting Step:** The array is sorted in ascending order using the `sort` function.
- **Checking for Duplicates:** After sorting, we iterate through the array and check if any element is equal to the previous element (i.e., `nums[i] == nums[i - 1]`). If so, we return `true` as this indicates a duplicate. If no such pair is found, we return `false`.

**Time Complexity:** `O(n log n)` due to the sorting step.

**Space Complexity:** `O(1)` since we are not using any additional data structures apart from the input array.