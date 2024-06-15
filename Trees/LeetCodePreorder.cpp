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
//     vector<int> preorderTraversal(TreeNode* root) {

//         vector<int> preOrder;
//              if (!root) return preOrder;
//             stack<TreeNode*> s;
//             TreeNode* curr = root;
//             s.push(root);
//             while(!s.empty()){
//                 TreeNode* curr = s.top();
//                 s.pop();
//                 preOrder.push_back(curr->val);
//                 if(curr->right!=NULL) s.push(curr->right);
//                 if(curr->left!=NULL) s.push(curr->left);
//             }
//            return preOrder;

//     }
// };

//------------------Easy My Code-----------------------------------
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
void preorder(TreeNode* root, vector<int> &v){
    if(root == NULL ) return;

    v.push_back(root->val);
    preorder(root->left,v);
    preorder(root->right,v);
}
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v;
        preorder(root,v);
        return v;

    }
};