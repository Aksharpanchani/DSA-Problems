/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;

        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(i!=n-1)
                    temp->next=q.front();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        return root;          
    }
};

//---------Another Approach----------------

class Solution {
public:
    Node* connect(Node* root) {
   
        Node* prev=root, *curr;
        while(prev){
            curr=prev;
            while(curr && curr->left){
                curr->left->next=curr->right;

                if(curr->next) curr->right->next=curr->next->left;
                curr=curr->next;
            }
            prev=prev->left;
        }
        return root;          
    }
};