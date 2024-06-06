//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
           // Calculate the initial sum S0 and the array_sum
        long long S0 = 0, array_sum = 0;
        for (int i = 0; i < n; i++) {
            S0 += i * a[i];
            array_sum += a[i];
        }

        long long max_sum = S0;

        // Calculate sum for rotation
        long long current_sum = S0;
        for (int i = 1; i < n; i++) {
            current_sum = current_sum + array_sum - n * a[n - i];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }

        return max_sum;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends