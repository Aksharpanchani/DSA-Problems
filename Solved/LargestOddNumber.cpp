class Solution {
public:
    string largestOddNumber(string num) {
         if (num.empty()) {
            return ""; 
        }

        for (int i = num.size() - 1; i >= 0; --i) {
            // Check if the current character represents an odd number
            if ((num[i] - '0') % 2 != 0) {
                // If it's odd, return the substring from the beginning to the current position
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};