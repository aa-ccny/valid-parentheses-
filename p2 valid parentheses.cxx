#include <stack>
#include <string>

class Solution {
public:
    bool isValid(const std::string& s) {
        std::stack<char> st;

        for (char c : s) {
            // Push the expected closing bracket when we see an opening one.
            if (c == '(') st.push(')');
            else if (c == '{') st.push('}');
            else if (c == '[') st.push(']');
            else {
                // c is a closing bracket: stack must not be empty and must match.
                if (st.empty() || st.top() != c) return false;
                st.pop(); // matched successfully
            }
        }
        // Valid only if no unmatched openers remain.
        return st.empty();
    }
};
