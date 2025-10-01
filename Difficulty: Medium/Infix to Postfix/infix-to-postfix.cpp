class Solution {
public:
    int priority(char c) {
        if (c == '^') return 3;
        if (c == '*' || c == '/') return 2;
        if (c == '+' || c == '-') return 1;
        return -1; // For non-operators (e.g., parentheses)
    }
    
    string infixToPostfix(string& s) {
        stack<char> st;
        string ans = "";
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            // If the character is an operand (alphanumeric), add it to the result
            if (isalnum(c)) {
                ans += c;
            }
            // If the character is an opening parenthesis, push it to the stack
            else if (c == '(') {
                st.push(c);
            }
            // If the character is a closing parenthesis, pop until opening parenthesis
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                // Pop the opening parenthesis
                if (!st.empty()) {
                    st.pop();
                }
            }
            // If the character is an operator
            else {
                // Pop operators with higher or equal precedence (considering associativity)
                while (!st.empty() && priority(c) <= priority(st.top()) && st.top() != '(') {
                    // For '^', only pop if precedence is equal (right-to-left associativity)
                    if (c == '^' && priority(c) == priority(st.top())) {
                        break;
                    }
                    ans += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        
        // Pop remaining operators from the stack
        while (!st.empty()) {
            if (st.top() != '(') {
                ans += st.top();
            }
            st.pop();
        }
        
        return ans;
    }
};