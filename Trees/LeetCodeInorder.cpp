// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//             vector<int> inOrder;
            
//             if (!root) return inOrder;
            
//             stack<TreeNode*> s;
//             TreeNode* curr = root;
//             while(curr!=NULL || !s.empty()){
//                 while(curr!=NULL){
//                     s.push(curr);
//                     curr = curr->left;
//                 }
//                 curr = s.top();
//                 s.pop();
//                 inOrder.push_back(curr->val);
//                 curr = curr->right;
//             }
//             return inOrder;
//     }
// };

//--------Easy------------------------------------------------------
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
void inorder(TreeNode* root, vector<int> &in){
    if(root==NULL) return;

    inorder(root->left,in);
    in.push_back(root->val);
    inorder(root->right,in);
}
    vector<int> inorderTraversal(TreeNode* root) {
            vector<int> in;
            inorder(root,in);
            return in;
    }
};