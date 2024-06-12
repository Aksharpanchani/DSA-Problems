//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
         int all_xor = Arr[0];
        for(int i = 1;i<N;i++)
        {
            all_xor ^= Arr[i];
        }
        int digit = __builtin_ctz(all_xor);
        int x1 = 0,x2= 0 ;
        for(int i = 0;i<N;i++)
        {
            if((1<<digit)&Arr[i])
            x1 ^= Arr[i];
            else
            x2 ^= Arr[i];
        }
        if(x1> x2)return {x1,x2};
        else return {x2,x1};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends