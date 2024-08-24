class Solution {
public:
    string nearestPalindromic(string n) {
        long num = stol(n);
        long ans = LLONG_MAX;
        long diff = LLONG_MAX;
        long len = n.size();
        set<long> candidates;
        candidates.insert((long)pow(10, len) + 1);
        candidates.insert((long)pow(10, len - 1) - 1);
        long prefix = stol(n.substr(0, (len + 1) / 2));
        for (long i = -1; i <= 1; ++i) {
            string prefixStr = to_string(prefix + i);
            string str = prefixStr + string(prefixStr.rbegin() + (len & 1), prefixStr.rend());
            candidates.insert(stol(str));
        }
        candidates.erase(num);
        for (long val : candidates) {
            if (abs(val - num) < diff) {
                diff = abs(val - num);
                ans = val;
            } else if (abs(val - num) == diff) {
                ans = min(ans, val);
            }
        }
        return to_string(ans);
    }
};