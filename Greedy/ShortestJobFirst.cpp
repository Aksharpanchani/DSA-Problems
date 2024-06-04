//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        int n = bt.size();
    vector<int> wt(n); // waiting time for each process

    // Sort the burst times in ascending order
    sort(bt.begin(), bt.end());

    // Calculate the waiting time for each process
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
      wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Calculate the total waiting time
    long long total_wt=0;
    for(auto i:wt){
        total_wt = total_wt + i;
    }

    // Calculate the average waiting time (round down)
    return total_wt / n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        long long ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends