
#include <bits/stdc++.h>
using namespace std;

// Function to recursively find the maximum path sum for a given cell
int getMaxUtil(int i, int j, int m, vector<vector<int>> &matrix, vector<vector<int>> &dp) {
    // Base Conditions
    if (j < 0 || j >= m)
        return -1e9; // A very large negative value to represent an invalid path
    if (i == 0)
        return matrix[0][j]; // The maximum path sum for the top row is the value itself
    
    if (dp[i][j] != -1)
        return dp[i][j]; // If the result for this cell is already calculated, return it
    
    // Calculate the maximum path sum by considering three possible directions: up, left diagonal, and right diagonal
    int up = matrix[i][j] + getMaxUtil(i - 1, j, m, matrix, dp);
    int leftDiagonal = matrix[i][j] + getMaxUtil(i - 1, j - 1, m, matrix, dp);
    int rightDiagonal = matrix[i][j] + getMaxUtil(i - 1, j + 1, m, matrix, dp);
    
    // Store the maximum of the three paths in dp
    return dp[i][j] = max(up, max(leftDiagonal, rightDiagonal));
}

// Function to find the maximum path sum in the given matrix
int getMaxPathSum(vector<vector<int>> &matrix) {
    int n = matrix.size(); // Number of rows in the matrix
    int m = matrix[0].size(); // Number of columns in the matrix
    
    vector<vector<int>> dp(n, vector<int>(m, -1)); // Memoization table to store computed results
    
    int maxi = INT_MIN; // Initialize the maximum path sum to a very small value
    
    // Iterate through each cell in the first row to find the maximum path sum starting from each of them
    for (int j = 0; j < m; j++) {
        int ans = getMaxUtil(n - 1, j, m, matrix, dp); // Calculate the maximum path sum for the last row
        maxi = max(maxi, ans); // Update the maximum path sum if a larger one is found
    }
    
    return maxi; // Return the maximum path sum
}

int main() {
    // Define the matrix as a 2D vector
    vector<vector<int>> matrix{{1, 2, 10, 4},
                                {100, 3, 2, 1},
                                {1, 1, 20, 2},
                                {1, 2, 2, 1}};
    
    // Call the getMaxPathSum function and print the result
    cout << getMaxPathSum(matrix);

    return 0;
}
//---------- Leetcode----------
// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n=matrix.size(),m=matrix[0].size(),ans=INT_MAX;
        
//         for(int i=1;i<n;i++){
//             for(int j=0;j<m;j++){
//                 int a=matrix[i-1][j];
//                 if(j+1<m) a=min(a,matrix[i-1][j+1]);
//                 if(j-1>=0) a=min(a,matrix[i-1][j-1]);
//                 matrix[i][j]+=a;
//             }
//         }
//         for(int i=0;i<m;i++) ans=min(ans,matrix[n-1][i]);
//         return ans;
//     }
// };