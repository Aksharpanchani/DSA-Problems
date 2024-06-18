class Solution {
private:
    
    int findMaxPathSum(TreeNode* node, int &sum) {
        if (node == nullptr) 
            return 0;

        int leftMax  = max(0, findMaxPathSum(node->left,  sum)); 
        int rightMax = max(0, findMaxPathSum(node->right, sum));

        int currentValue = node->val;

        sum = max(sum, leftMax + rightMax + currentValue);

        return max(leftMax, rightMax) + currentValue; 
    }

public:
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;  
        findMaxPathSum(root, sum);  
        return sum;  
    }
};