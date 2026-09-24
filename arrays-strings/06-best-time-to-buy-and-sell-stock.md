# Problem: Best Time to Buy and Sell Stock (Easy)

**LeetCode Link:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Approach

The solution uses a single-pass greedy approach. The minimum stock price seen so far is tracked while traversing the array.

For each price, the possible profit is calculated by subtracting the minimum price seen so far from the current price. If this profit is greater than the maximum profit found so far, the maximum profit is updated.

This ensures that the stock is always bought before it is sold.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

```text
Input:

prices = [7, 1, 5, 3, 6, 4]

Output:

5

Explanation: Buy at price 1 and sell at price 6 for a maximum profit of 5.
```

### Test Case 2 — Edge Case

```text
Input:

prices = [7, 6, 4, 3, 1]

Output:

0

This verifies that the solution correctly handles a case where no profitable transaction is possible.
```

## Notes
- The stock must be bought before it is sold.
- The minimum price seen so far is maintained while traversing the array.
- If no profitable transaction is possible, the result is 0.
- The solution was compiled and tested locally in VS Code before submission.
- Both a typical test case and an edge case were verified locally.
- The verified solution was submitted successfully on LeetCode and received an Accepted result.