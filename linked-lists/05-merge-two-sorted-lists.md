# Problem: Merge Two Sorted Lists (Easy)

**LeetCode Link:** [https://leetcode.com/problems/merge-two-sorted-lists/](https://leetcode.com/problems/merge-two-sorted-lists/)

## Approach

The solution uses an iterative approach with a temporary dummy node. Two pointers traverse the two sorted linked lists.

At each step, the smaller current node is attached to the merged list. Once one list reaches the end, the remaining nodes of the other list are attached directly.

The dummy node makes it easier to build the merged list without needing separate handling for the first node.

## Complexity

- **Time:** O(n + m)
- **Space:** O(1) auxiliary space

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
list1 = [1, 2, 4]
list2 = [1, 3, 4]

Output:
[1, 1, 2, 3, 4, 4]

Explanation: The two sorted lists are merged while maintaining sorted order.
```

### Test Case 2 — Edge Case

```text
Input:
list1 = []
list2 = [0]

Output:
[0]

This verifies that the solution correctly handles an empty first list.
```

## Notes
- Both input linked lists are already sorted in ascending order.
- The solution reuses the existing list nodes instead of creating new nodes for the merged result.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.