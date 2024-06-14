/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    /*You have been given a Binary Tree of 'N' nodes, where the nodes have integer values.
Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.  */
       vector<vector<int>> res;
         vector<int> inOrder;
            vector<int> preOrder;
            vector<int> postOrder;
            stack<TreeNode*> s;
            TreeNode* curr = root;
            while(curr!=NULL || !s.empty()){
                while(curr!=NULL){
                    s.push(curr);
                    curr = curr->left;
                }
                curr = s.top();
                s.pop();
                inOrder.push_back(curr->data);
                curr = curr->right;
            }
            res.push_back(inOrder);
            s.push(root);
            while(!s.empty()){
                TreeNode* curr = s.top();
                s.pop();
                preOrder.push_back(curr->data);
                if(curr->right!=NULL) s.push(curr->right);
                if(curr->left!=NULL) s.push(curr->left);
            }
            res.push_back(preOrder);
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
                postOrder.push_back(s1.top()->data);
                s1.pop();
            }
            res.push_back(postOrder);
            return res;
            
}