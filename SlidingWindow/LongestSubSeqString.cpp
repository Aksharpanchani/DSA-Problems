//  int lengthOfLongestSubstring(string s){
//         int n = s.size();
//         int i = 0, j = 0;
//         int ans = 0;
//         unordered_map<char, int> mp;
//         while(j < n){
//             mp[s[j]]++;
//             if(mp.size() == j-i+1){
//                 ans = max(ans, j-i+1);
//                 j++;
//             }
//             else if(mp.size() < j-i+1){
//                 while(mp.size() < j-i+1){
//                     mp[s[i]]--;
//                     if(mp[s[i]] == 0)
//                         mp.erase(s[i]);
//                     i++;
//                 }
//                 j++;
//             }
//         }
//         return ans;
//     }   
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0,maxlen=0;
        vector<int> hash(256, -1);
        int n=s.size();
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l = hash[s[r]] +1;
                }
            }
            maxlen=max(r-l+1,maxlen);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};