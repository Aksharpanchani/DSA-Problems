//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        int r=0,l=0;
        int maxlen=0;
        unordered_map<int,int> mpp;
        while(r<N){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
            mpp[fruits[l]]--;
            if(mpp[fruits[l]]==0){
                
                mpp.erase(fruits[l]);
                
            }
                l++;
            }
            if(mpp.size()<=2){
                maxlen=max(r-l+1,maxlen);
            }
            
            r++;
        }
        return maxlen;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends