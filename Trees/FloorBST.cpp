#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int f=-1;
    while(root!=NULL){
        if(root->val==X) return X;
        else if(root->val<=X){
            f=root->val;
            root=root->right;
        }
        else root=root->left;
    }
    return f;
}