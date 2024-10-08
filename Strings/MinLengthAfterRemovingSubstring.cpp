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

// Rewrite the code but the for loop should be in the fashion as for(int i=0; i<n; i++) where n is the size of the string

class solution{
    public:
    int minLength(string s){
        stack<char> st;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(!st.empty() && st.top() == 'A' && s[i] == 'B'){
                st.pop();
            } else if(!st.empty() && st.top() == 'C' && s[i] == 'D'){
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
