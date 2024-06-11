//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fxor(int res){
       int n=res%4;
       
        if(n==0)
        return res;
       
        if(n==1)
        return 1;
       
        else if(n==2)
        return res+1;
       
        else if(n==3)
        return 0;
        
        
    }
    
    int findXOR(int l, int r) {
       
    //   int ans=0; // complete the function here
    //     ans= l^l^r;
        
    return (fxor(l-1)^fxor(r));
    
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends