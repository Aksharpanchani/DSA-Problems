class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target) return true;
               
            }
        }
         return false;
    }
};

// Optimal Approach: Binary Search
// Time Complexity: O(log(n*m))
// Space Complexity: O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int r=n*m-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(matrix[mid/m][mid%m]==target) return true;
            if(matrix[mid/m][mid%m]<target) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};

//Second approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0, j=m-1;
        while(i<n && j>=0){
            if(matrix[j][i] == target)
                return true;
            if(matrix[j][i] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};