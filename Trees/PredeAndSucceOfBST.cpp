/* BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
         Node* curr=root;
        while(curr!=NULL){
            if(curr->key>=key){
                curr=curr->left;
            }
            else{
                pre=curr;
                curr=curr->right;
            }
        }
        Node* curr2=root;
        while(curr2!=NULL){
            if(curr2->key>key){
                suc=curr2;
                curr2=curr2->left;
            }
            else{
                curr2=curr2->right;
            }
        }
    }
};