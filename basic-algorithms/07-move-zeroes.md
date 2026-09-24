# Problem: Move Zeroes (Easy)

**LeetCode Link:** [https://leetcode.com/problems/move-zeroes/](https://leetcode.com/problems/move-zeroes/)

## Approach

The solution uses a two-step approach with an insertion position pointer.

First, the array is traversed and all non-zero elements are moved to the front while maintaining their original relative order. The insertion position is increased whenever a non-zero element is placed.

After all non-zero elements have been moved, the remaining positions in the array are filled with zeroes.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:

nums = [0, 1, 0, 3, 12]

Output:

[1, 3, 12, 0, 0]

Explanation: All zeroes are moved to the end while the relative order of the non-zero elements is preserved.
```

### Test Case 2 — Edge Case

```text
Input:

nums = [0, 0, 0]

Output:

[0, 0, 0]

This verifies that the solution correctly handles an array containing only zeroes.
```

## Notes
- All zeroes are moved to the end of the array.
- The relative order of the non-zero elements is preserved.
- The solution modifies the array in place.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.