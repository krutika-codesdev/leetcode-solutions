# Problem: Binary Search (Easy)

**LeetCode Link:** [https://leetcode.com/problems/binary-search/](https://leetcode.com/problems/binary-search/)

## Approach

The solution uses binary search on the sorted array. Two pointers, `left` and `right`, represent the current search range.

The middle element is checked against the target. If the middle element is smaller than the target, the search continues in the right half. If it is larger, the search continues in the left half. If the target is found, its index is returned. If the target is not present, the function returns `-1`.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
nums = [-1, 0, 3, 5, 9, 12]
target = 9

Output:
4

Explanation: The target 9 is present at index 4.
```

### Test Case 2 — Edge Case

```text
Input:
nums = [5]
target = 5

Output:
0

This verifies that the solution correctly handles an array containing only one element.
```

## Notes
- Binary search requires the input array to be sorted.
- The search range is repeatedly divided into two halves.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.