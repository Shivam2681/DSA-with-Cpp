

// class Solution
// {
//     public:
//     //Function to add two numbers represented by linked list.
//    void insertattail(Node* &head, Node* &tail, int digit){
//         Node* temp = new Node(digit);
//         if(head == NULL){
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else{
//             tail->next = temp;
//             tail = temp;
//         }
//     }
// struct Node* reverse(Node*&head)
// {
//     Node*prev = NULL;
    
//     Node*current = head;
//     Node*forward = NULL;
    
//     while(current!=NULL){
//         forward = current->next;
//         current->next = prev;
//         prev = current;
//         current = forward;
//     }
//     return prev;
// }
// struct Node* add(struct Node* first, struct Node* second){
    // int carry = 0;
    // Node* ansHead = NULL;
    // Node* ansTail = NULL;
    
    // while(first != NULL || second != NULL || carry !=0){
    //     int val1 = 0;
    //     if(first != NULL){
    //         val1 = first->data;
    //     }
    //     int val2 = 0;
    //     if(second != NULL){
    //         val2 = second->data;
    //     }
    //     int sum = carry + val1 + val2;
    //     int digit = sum%10;
    //     insertattail(ansHead,ansTail,digit);
        
    //     carry = sum/10;
        
    //     if(first!=NULL){
    //         first = first->next;
    //     }
    //     if(second!=NULL){
    //         second = second->next;
    //     }
    // }
    // return ansHead;
// }

//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
        // first = reverse(first);
        // second = reverse(second);
        
        // Node* ans = add(first,second);
        
        // ans = reverse(ans);
        
        // return ans;
        
//     }
// };


