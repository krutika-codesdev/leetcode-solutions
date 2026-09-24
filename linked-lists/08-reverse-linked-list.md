# Problem: Reverse Linked List (Easy)

**LeetCode Link:** [https://leetcode.com/problems/reverse-linked-list/](https://leetcode.com/problems/reverse-linked-list/)

## Approach

The solution uses an iterative approach with three pointers: `previous`, `current`, and `nextNode`.

The `current` node is processed one at a time. Its next pointer is changed to point to the previous node, reversing the direction of the link. The pointers are then moved forward until the entire linked list has been reversed.

At the end, `previous` points to the new head of the reversed linked list.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:

head = [1, 2, 3, 4, 5]

Output:

[5, 4, 3, 2, 1]

Explanation: The links between the nodes are reversed, making 5 the new head of the list.
```

### Test Case 2 — Edge Case

```text
Input:

head = [1]

Output:

[1]

This verifies that the solution correctly handles a linked list containing only one node.
```

## Notes
- The linked list is reversed in place.
- Three pointers are used to safely reverse each link.
- The original head becomes the last node after reversal.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.