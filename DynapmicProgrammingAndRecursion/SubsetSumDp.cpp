//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool ans(vector<int>arr , int target , int ind , vector<vector<int>> &dp ){
        if(ind<0){
            return false;
        }
        if(target==0){
            return true;
        }
        if(ind==0){
            if(target==arr[ind]){
                return true;
            }
            return false;
        }
        if(dp[ind][target]!=-1){
            return dp[ind][target];
        }
        bool notTake=ans(arr, target , ind-1 ,dp);
        bool take=false;
        if(target>=arr[ind]){
            take=ans(arr , target-arr[ind] , ind-1, dp);
        }
        return dp[ind][target]= (take || notTake);
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>>dp (arr.size() , vector<int>(sum+1 , -1));
        return ans(arr, sum , arr.size()-1, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends