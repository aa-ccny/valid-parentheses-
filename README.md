Problem 2 — Valid Parentheses (#20)

In this problem, we’re given a string containing parentheses, braces, and brackets — we need to check if they’re properly matched and closed.
The main idea is to use a stack.

When I see an opening bracket like (, {, or [, I push the expected closing one onto the stack.
When I see a closing bracket, I check if it matches the top of the stack — if it doesn’t, the string is invalid.
At the end, if the stack is empty, it means all brackets were matched correctly.

This uses O(n) time and up to O(n) space in the worst case when all characters are openers.
It’s a simple and powerful use of the stack data structure to maintain order.


How it works (step-by-step)

Use a stack to track openers we’ve seen but not yet matched.

When you see an opener (, {, [, push the expected closer ), }, ] onto the stack.

When you see a closer, the stack must be non-empty and its top must equal that closer; otherwise it’s invalid.

At the end, the stack must be empty (all openers matched).

Time: O(n) — single pass.

Space: O(n) worst-case (all openers).


