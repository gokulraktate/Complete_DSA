/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Brute Force

// class Solution {
//   public:
//     Node* reverseList(Node *head) {
//          if(head==NULL || head->next==NULL){
//             return head;
//          }

//          Node* newHead=reverseList(head->next);
//          Node* front=head->next;
//          front->next=head;
//          head->next=nullptr;

//          return newHead;
//     }

//     Node* addOne(Node* head) {
//         // Your Code here
//         // return head of list after adding one
//         head=reverseList(head);
//         int carry=1;
        
//         Node* temp=head;
//         while(temp){
//             temp->data=temp->data+carry;
//             if(temp->data<10){
//                 carry=0;
//                 break;
//             }
//             else{
//                 temp->data=0;
//                 carry=1;
//             }
//             temp=temp->next;
//         }
        
//         if(carry==1){
//             head=reverseList(head);
//             Node* newHead=new Node(1);
//             newHead->next=head;
//             return newHead;
//         }
//         head=reverseList(head);
//         return head;
        
//     }
// };


// Optimal


// class Solution {
//   public:
//     Node* addOne(Node* head) {
//         // Your Code here
//         // return head of list after adding one
//         int carry=helper(head);
//         if(carry==1){
//             Node* newNode=new Node(1);
//             newNode->next=head;
//             return newNode;
//         }
//         return head;
//     }
//     int helper(Node* temp)
//         {
//             if(temp==NULL){
//                 return 1;
//             }
//             int carry=helper(temp->next);
//             temp->data=temp->data+carry;
//             if(temp->data<10){
//                 return 0;
//             }
//             temp->data=0;
//             return 1;
//         }
// };