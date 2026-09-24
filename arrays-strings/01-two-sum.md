# Problem: Two Sum (Easy)

**LeetCode Link:** https://leetcode.com/problems/two-sum/

## Approach

The solution uses a brute-force approach. It checks every possible pair of elements in the array and returns the indices when their sum equals the target value.

Two nested loops are used to examine all possible pairs.

## Complexity

- **Time:** O(n²)
- **Space:** O(1) auxiliary space

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Explanation: `nums[0] + nums[1] = 2 + 7 = 9`.
```

### Test Case 2 — Edge Case

```text
Input:
nums = [3, 3]
target = 6

Output:
[0, 1]

This verifies that the solution correctly handles duplicate values.
```

## Notes
- The returned values are indices, not the actual numbers.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.