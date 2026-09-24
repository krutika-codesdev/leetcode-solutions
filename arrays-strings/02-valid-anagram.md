# Problem: Valid Anagram (Easy)

**LeetCode Link:** [https://leetcode.com/problems/valid-anagram/](https://leetcode.com/problems/valid-anagram/)

## Approach

The solution uses a frequency-counting approach. A frequency array is used to count the occurrences of each character in both strings.

For every character in the first string, its count is increased, while the corresponding character count from the second string is decreased. If all counts become zero, the two strings are anagrams.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
s = "anagram"
t = "nagaram"

Output:
true

Explanation: Both strings contain the same characters with the same frequencies.
```
### Test Case 2 — Edge Case

```text
Input:
s = "a"
t = "b"

Output:
false

This verifies that the solution correctly identifies strings with different characters as not being anagrams.
```

## Notes
- The solution first checks whether the two strings have the same length.
- Character frequencies are tracked using an array of size 256.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.