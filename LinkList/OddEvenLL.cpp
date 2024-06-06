//-------------Brute Force---------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// ListNode* collectValues(ListNode* head, vector<int>& arr) {
//     ListNode* temp = head;

//     // Collect values from the nodes skipping one node each time
//     while (temp != NULL && temp->next != NULL) {
//         arr.push_back(temp->val);
//         temp = temp->next->next;
//     }
//     if (temp) {
//         arr.push_back(temp->val);
//     }

//     // Start from the second node and repeat the process
//     temp = head ? head->next : NULL;

//     while (temp != NULL && temp->next != NULL) {
//         arr.push_back(temp->val);
//         temp = temp->next->next;
//     }
//     if (temp) {
//         arr.push_back(temp->val);
//     }

//     // Return the original list head
//     return head;
// }

// int main() {
//     // Example usage:
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);
//     head->next->next->next->next = new ListNode(5);

//     vector<int> values;
//     collectValues(head, values);

//     for (int val : values) {
//         cout << val << " ";
//     }
//     // Output should be: 1 3 5 2 4

//     // Cleanup
//     while (head != NULL) {
//         ListNode* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }

//-------------Optimal---------------------------------------------
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
    ListNode* oddEvenList(ListNode* head) {
         if(!head || !head->next || !head->next->next) return head;

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenh=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenh;

        return head;

    }
};
//-------------Optimal---------------------------------------------
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
    ListNode* oddEvenList(ListNode* head) {
         if(!head || !head->next || !head->next->next) return head;

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenh=head->next;
        while(odd->next!=NULL && even->next!=NULL){
            odd->next=even->next;
            even->next=odd->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenh;

        return head;

    }
};