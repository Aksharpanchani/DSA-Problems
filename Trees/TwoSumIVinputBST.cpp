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
    unordered_set<int> element;
    bool findTarget(TreeNode* root, int k) {
        
        if(root==NULL) return false;  // if we are at next to leaf node
        if(element.find(k-root->val)!=element.end()) return true;  // if we found the required element in set
        element.insert(root->val); // insert root to set
        return findTarget(root->left,k)|| findTarget(root->right,k);
    }
};


//-------------------------------

class Solution {
public:
    void nodetoarray (TreeNode* &node, vector<int> &v){
        if(node == nullptr) return;
        v.push_back(node->val);
        nodetoarray(node->left, v);
        nodetoarray(node->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        nodetoarray(root, v);
        int n = v.size();
        sort(v.begin(), v.end());
        for(int i = 0;i < n; i++){
            if (k != 2*v[i]) {
                if(find(v.begin(), v.end(), k-v[i]) != v.end()) return true;
            }
        }
        return false;
    }
};