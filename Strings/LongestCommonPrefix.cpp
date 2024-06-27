class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        // Find the minimum length string in the array
        int minLength = strs[0].size();
        for (const auto& str : strs) {
            minLength = std::min(minLength, static_cast<int>(str.size()));
        }

        int low = 1;
        int high = minLength;
        
        // Binary search for the longest common prefix
        while (low <= high) {
            int middle = (low + high) / 2;
            if (isCommonPrefix(strs, middle)) {
                low = middle + 1;
            } else {
                high = middle - 1;
            }
        }

        return strs[0].substr(0, (low + high) / 2);
    }

private:
    bool isCommonPrefix(const std::vector<std::string>& strs, int len) {
        std::string str1 = strs[0].substr(0, len);
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].find(str1) != 0) {
                return false;
            }
        }
        return true;
    }
    };
 