/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Brute Force


// class Solution {
//   public:
//     // Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node* head) {

//         // Add code here
//         int cnt0=0,cnt1=0,cnt2=0;
//         Node* temp=head;
//         while(temp){
//             if(temp->data==0){
//                 cnt0++;
//             }
//             if(temp->data==1){
//                 cnt1++;
//             }
//             if(temp->data==2){
//                 cnt2++;
//             }
//             temp=temp->next;
//         }
//         temp=head;
//         while(temp){
//             while(cnt0){
//                 temp->data=0;
//                 temp=temp->next;
//                 cnt0--;
//             }
//             while(cnt1){
//                 temp->data=1;
//                 temp=temp->next;
//                 cnt1--;
//             }
//             while(cnt2){
//                 temp->data=2;
//                 temp=temp->next;
//                 cnt2--;
//             }
//         }
//         return head;
//     }
// };



// Optimal


// class Solution {
//   public:
//     // Function to sort a linked list of 0s, 1s and 2s.
//     Node* segregate(Node* head) {

//         // Add code here
//         if(head==NULL || head->next==NULL) return head;
//         Node* ZeroHead=new Node(-1);
//         Node* OneHead=new Node(-1);
//         Node* TwoHead=new Node(-1);
        
//         Node* zero=ZeroHead;
//         Node* one=OneHead;
//         Node* two=TwoHead;
        
//         Node* temp=head;
        
//         while(temp){
//             if(temp->data==0){
//                 zero->next=temp;
//                 zero=zero->next;
//             }
//             else if(temp->data==1){
//                 one->next=temp;
//                 one=one->next;
//             }
//             else{
//                 two->next=temp;
//                 two=two->next;
//             }
//             temp=temp->next;
//         }
//         zero->next=(OneHead->next) ? (OneHead->next):(TwoHead->next);
//         one->next=TwoHead->next;
//         two->next=nullptr;
        
//         Node* newHead=ZeroHead->next;
        
//         delete ZeroHead;
//         delete OneHead;
//         delete TwoHead;
        
//         return newHead;
//     }
// };