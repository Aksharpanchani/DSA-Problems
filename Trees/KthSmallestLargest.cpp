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
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        int ksmall=v[k-1];
        return ksmall;
    }
};


//Kth Largest-------------------------------------------------
/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{   
    void inorder(Node* root, vector<int> &v){
        if(!root) return;

        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        return;
    }
    public:
    int kthLargest(Node *root, int K)
    {

        vector<int> v;
        inorder(root,v);
        int klarge=v[v.size()-K];
        return klarge;
 
    }
};