//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int ans = 0;
    //linear search on the answer space:
    for (long long i = 1; i <= x; i++) {
        long long val = i * i;
        if (val <= x * 1ll) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends

//----------------------Other Method In built function----------------------//
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
       int ans =sqrt(x);
       return ans;
        
    }
};

//--------------Binary Search-----------------//
int low = 1, high = n;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;