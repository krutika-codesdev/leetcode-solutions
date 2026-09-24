# Problem: Valid Parentheses (Easy)

**LeetCode Link:** [https://leetcode.com/problems/valid-parentheses/](https://leetcode.com/problems/valid-parentheses/)

## Approach

The solution uses a stack to keep track of opening brackets. When an opening bracket is encountered, it is pushed onto the stack. When a closing bracket is encountered, the most recent opening bracket is removed from the stack and checked to ensure that it matches the closing bracket.

If a closing bracket does not match the corresponding opening bracket, the string is invalid. At the end, the stack must be empty for the string to be valid.

## Complexity

- **Time:** O(n)
- **Space:** O(n)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:
s = "()[]{}"

Output:
true

Explanation: Every opening bracket has a corresponding closing bracket in the correct order.
```

### Test Case 2 — Edge Case

```text
Input:
s = "("

Output:
false

This verifies that the solution correctly handles an unmatched opening bracket.
```

## Notes
- A stack is used to follow the last-in, first-out (LIFO) principle.
- The solution checks whether each closing bracket matches the most recently opened bracket.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.