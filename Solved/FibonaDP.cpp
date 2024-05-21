// #include <bits/stdc++.h>

// using namespace std;

// int f(int n, vector<int>& dp){
//     if(n<=1) return n;
    
//     if(dp[n]!= -1) return dp[n];
//     return dp[n]= f(n-1,dp) + f(n-2,dp);
// }


// int main() {

//   int n=5;
//   vector<int> dp(n+1,-1);
//   cout<<f(n,dp);
//   return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;


// int main() {

//   int n=5;
//   vector<int> dp(n+1,-1);
  
//   dp[0]= 0;
//   dp[1]= 1;
  
//   for(int i=2; i<=n; i++){
//       dp[i] = dp[i-1]+ dp[i-2];
//   }
//   cout<<dp[n];
//   return 0;
// }

//-------------------Optimised-------------------------------------
#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
int main() {

  int n=697 ;
  
  int prev2 = 0;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = (prev2+ prev)%mod;
      prev2 = prev;
      prev= cur_i;
  }
  cout<<prev;
  return 0;
}

/*
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
    #define mod 1000000007
 vector<long long int> dp(100001, 0);
class Solution {
  public:
  
//   int f(int n, vector<int>& dp){
//     if(n<=1) return n;
    
//     if(dp[n]!= -1) return dp[n];
//     return dp[n]= f(n-1,dp) + f(n-2,dp);
// }
    long long int topDown(int n) {
        // code here
         vector<long long int> dp(n+1,-1);
  
          dp[0]= 0;
          dp[1]= 1;
          
          for(int i=2; i<=n; i++){
              dp[i] = (dp[i-1]+ dp[i-2])%mod;
          }
          return dp[n];
    }
    long long int bottomUp(int n) {
        // code here
        vector<long long int> dp(n+1,-1);
          
          dp[0]= 0;
          dp[1]= 1;
          
          for(int i=2; i<=n; i++){
              dp[i] = (dp[i-1]+ dp[i-2])%mod; 
          }
          return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends






*/