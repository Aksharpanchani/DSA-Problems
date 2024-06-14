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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
         if (!root) return postOrder;

        stack<TreeNode*> s;
        TreeNode* curr = root;
        stack<TreeNode*> s1;
            s.push(root);
            while(!s.empty()){
                TreeNode* curr = s.top();
                s.pop();
                s1.push(curr);
                if(curr->left!=NULL) s.push(curr->left);
                if(curr->right!=NULL) s.push(curr->right);
            }
            while(!s1.empty()){
                postOrder.push_back(s1.top()->val);
                s1.pop();
            }
            return postOrder;
    }
};