#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int X){
    // Write your code here.
     int ceil = -1; 
        
        while(node){

            if(node->data == X){
                ceil = node->data;
                return ceil;
            } 
            
            if(X > node->data){
                node = node->right;
            }
            else{ 
                ceil = node->data;
                node = node->left;
            }
        }
        return ceil;
}