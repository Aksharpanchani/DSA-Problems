// //{ Driver Code Starts
// //Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function template for C++

// class Solution{   
// public:
//     int median(vector<vector<int>> &matrix, int r, int c){
//         // Brute force -----------working------------    
//         // vector<int> copy;
//         // for(int i=0;i<R;i++){
//         //     for(int j=0;j<C;j++){
//         //         copy.push_back(matrix[i][j]);
//         //     }
//         // }
//         // sort(copy.begin(),copy.end());
//         // return copy[(copy.size()/2)];
        
//               int min=matrix[0][0],max=matrix[0][r-1];
        
//         for(int i=0;i<r;i++)
//         {
//             if(matrix[i][0]<min)
//             min=matrix[i][0];
//             if(matrix[i][c-1]>max)
//             max=matrix[i][c-1];
//         }
//         int medPos=(r*c+1)/2;
//         while(min<max)
//         {
//             int mid=(min+max)/2;
//             int midPos=0;
//             for(int i=0;i<r;i++)
//             {
//                 midPos += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
//             }
//             if(midPos<medPos)
//             min=mid+1;
//             else
//             max=mid;
//         }
//         return min;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int r, c;
//         cin>>r>>c;
//         vector<vector<int>> matrix(r, vector<int>(c));
//         for(int i = 0; i < r; ++i)
//             for(int j = 0;j < c; ++j)
//                 cin>>matrix[i][j];
//         Solution obj;
//         int ans=-1;
//         ans=obj.median(matrix, r, c);
//         cout<<ans<<"\n";        
//     }
//     return 0;
// }
// // } Driver Code Ends
     //////-------------------------Optimized Approach-------------------------//////                               
#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int countSmallEqual(vector<vector<int>> &matrix, int m, int n, int x) {
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        cnt += upperBound(matrix[i], x, n);
    }
    return cnt;
}

int median(vector<vector<int>> &matrix, int m, int n) {
    int low = INT_MAX, high = INT_MIN;

    //point low and high to right elements:
    for (int i = 0; i < m; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][n - 1]);
    }

    int req = (n * m) / 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        int smallEqual = countSmallEqual(matrix, m, n, mid);
        if (smallEqual <= req) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    int m = matrix.size(), n = matrix[0].size();
    int ans = median(matrix, m, n);
    cout << "The median element is: " << ans << endl;
    return 0;
}
                                    
                                