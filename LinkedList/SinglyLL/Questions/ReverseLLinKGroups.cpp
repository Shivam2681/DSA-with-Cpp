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
// class Solution {
// public:

//     ListNode* reverseKGroup(ListNode* head, int k) {
        // int n = 0;
        // ListNode* current = head;
        // while(current != NULL){
        //     current = current->next;
        //     n++;
        // }
        // if(n<k){
        //     return head;
        // }

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;
//         int count = 0;

//         while(curr != NULL && count < k){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             count++;
//         }

//         if(next != NULL){
//             head->next = reverseKGroup(next,k);
//         }

//         return prev;
//     }
// };