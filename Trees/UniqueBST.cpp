//------------Catalan Numbers
//------------Number of unique BSTs that can be formed with n nodes
//------------Catalan(n)=C(2n,n)/(n+1)
//------------Catalan(n)=Catalan(n-1)*(2*(2n+1)/(n+2))
// #include <bits/stdc++.h>
// #define Mod 1000000007
// using namespace std;

// class Solution {
// public:
//     long numTrees(long n) {

//         long ans = 1;

//         for (long k = 2; k <= n; k++) {
//             ans *= (n + k);
//             ans /= k;
//         }

//         return ans % Mod;
//     }
// };

// signed int main(){
//     long t;
//     cin>>t;
//     while(t--){
//         long n;
//         cin>>n;
//         Solution ob;
//         cout<<ob.numTrees(n)<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

// Function to calculate the number of unique BSTs for each value in nodeValues
vector<int> numBST(vector<int> nodeValues) {
    int maxN = *max_element(nodeValues.begin(), nodeValues.end());
    
    // Create a vector to store the catalan numbers
    vector<long long> catalan(maxN + 1, 0);
    
    // Initializing the first two catalan numbers
    catalan[0] = 1;
    catalan[1] = 1;
    
    // Fill the catalan array up to maxN
    for (int i = 2; i <= maxN; i++) {
        for (int j = 0; j < i; j++) {
            catalan[i] = (catalan[i] + (catalan[j] * catalan[i - j - 1]) % MOD) % MOD;
        }
    }
    
    // Prepare the result for each value in nodeValues
    vector<int> result;
    for (int value : nodeValues) {
        result.push_back(catalan[value]);
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nodeValues(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nodeValues[i];
    }
    
    vector<int> result = numBST(nodeValues);
    
    for (int value : result) {
        cout << value << endl;
    }
    
    return 0;
}
