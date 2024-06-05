/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include <bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //My SOLUTION 
        // ListNode* temp=head;
        // stack<int> st;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //     temp->val = st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head; 
         ListNode* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   ListNode* prev = NULL;  
   
   // Traverse the list, continue till
   // 'temp' reaches the end (NULL)
   while(temp != NULL){  
       // Store the next node in
       // 'front' to preserve the reference
       ListNode* front = temp->next;  
       
       // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
       temp->next = prev;  
       
        // Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
   }
   
   // Return the new head of
   // the reversed linked list
   return prev;  
    }
//----------------Recursive approach with explanation-------------------
    //  // Base case:
    // // If the linked list is empty or has only one node,
    // // return the head as it is already reversed.
    // if (head == NULL || head->next == NULL) {
    //     return head;
    // }
    
    // // Recursive step:
    // // Reverse the linked list starting 
    // // from the second node (head->next).
    // Node* newHead = reverseLinkedList(head->next);
    
    // // Save a reference to the node following
    // // the current 'head' node.
    // Node* front = head->next;
    
    // // Make the 'front' node point to the current
    // // 'head' node in the reversed order.
    // front->next = head;
    
    // // Break the link from the current 'head' node
    // // to the 'front' node to avoid cycles.
    // head->next = NULL;
    
    // // Return the 'newHead,' which is the new
    // // head of the reversed linked list.
    // return newHead;

};