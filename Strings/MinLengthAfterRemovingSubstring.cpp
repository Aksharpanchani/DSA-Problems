class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        
       // Checking for substring AB and CD both in a single loop using else if condition
        for (char c : s) {
            if (!st.empty() && st.top() == 'A' && c == 'B') {
                st.pop();
            } else if (!st.empty() && st.top() == 'C' && c == 'D') {
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        return st.size();

    }     
};