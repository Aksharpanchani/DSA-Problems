/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int level = 0;
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> currentLevel;
            for(int i = 0; i < size; i++){
                TreeNode* current = q.front();
                q.pop();
                if(level % 2 == 0){
                    currentLevel.push_back(current->val);
                } else {
                    currentLevel.insert(currentLevel.begin(), current->val);
                }
                if(current->left != NULL){
                    q.push(current->left);
                }
                if(current->right != NULL){
                    q.push(current->right);
                }
            }
            result.push_back(currentLevel);
            level++;
        }
        return result;
    }
};