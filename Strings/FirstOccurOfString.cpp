class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=haystack.size();
       int m=needle.size();
      
       for(int i=0;i<=n-m;i++){
       if(haystack.substr(i,m)==needle) return i;
       }
         if (n < m) {
            return -1;
        }
         if (m==0) {
            return 0;
        }
        return -1;
    }
};
//-------------GFG----With driver code----------
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        int n=text.size();
       int m=pat.size();
      
       for(int i=0;i<=n-m;i++){
       if(text.substr(i,m)==pat) return i;
       }
         if (n < m) {
            return -1;
        }
         if (m==0) {
            return 0;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends