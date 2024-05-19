// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int count[26] = {0};
        
//         // Count the frequency of characters in string s
//         for (char x : s) {
//             count[x - 'a']++;
//         }
        
//         // Decrement the frequency of characters in string t
//         for (char x : t) {
//             count[x - 'a']--;
//         }
        
//         // Check if any character has non-zero frequency
//         for (int val : count) {
//             if (val != 0) {
//                 return false;
//             }
//         }
        
//         return true;
//     }
// };
//--------------------------------------------------------------
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char, int> count;
        
//         // Count the frequency of characters in string s
//         for (auto x : s) {
//             count[x]++;
//         }
        
//         // Decrement the frequency of characters in string t
//         for (auto x : t) {
//             count[x]--;
//         }
        
//         // Check if any character has non-zero frequency
//         for (auto x : count) {
//             if (x.second != 0) {
//                 return false;
//             }
//         }
        
//         return true;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (str1.length() != str2.length())
    return false;
 
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
 
  for (int i = 0; i < str1.length(); i++)
  {
    if (str1[i] != str2[i])
      return false;
  }
  return true;
    }
};