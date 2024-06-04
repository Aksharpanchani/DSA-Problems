class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int no=matrix.size();

        vector<vector<int>> mat = matrix;

        
        // vector<vector<int>> ans(no, vector < int > (no, 0));
        for(int i=0;i<no;i++){
            for(int j=0;j<no;j++){
                matrix[j][no-i-1]=mat[i][j];
            }
        }
        // cout<<'[';
        // for(int i=0;i<no;i++){
        //     // cout<<'[';
        //     for(int j=0;j<no;j++){
        //         cout<<ans[i][j]<<',';
        //     }
        //     // cout<<']';
        // }
        // cout<<']';
    }
};