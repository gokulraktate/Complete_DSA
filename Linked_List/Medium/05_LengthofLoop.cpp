
// struct Node {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// BRUTE FORCE

// */
// class Solution {
//   public:
//     // Function to find the length of a loop in the linked list.
//     int countNodesinLoop(Node *head) {
//         // Code here
//         map<Node*,int>mpp;
//         Node* temp=head;
//         int timer=1;
//         while(temp!=NULL){
//             if(mpp.find(temp)!=mpp.end()){
//                 return timer-mpp[temp];
//             }
//             mpp[temp]=timer;
//             timer++;
//             temp=temp->next;
//         }
//         return 0;
//     }
// };



// Optimal


// class Solution {
//   public:
//     // Function to find the length of a loop in the linked list.
//     int countNodesinLoop(Node *head) {
//         // Code here
//         Node* slow=head;
//         Node* fast=head;
//         while(fast!=NULL  &&  fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 return CountLength(slow,fast);
//             }
//         }
//         return 0;
//     }
//     int CountLength(Node* slow,Node* fast){
//         int cnt=1;
//         fast=fast->next;
//         while(slow!=fast){
//             cnt++;
//             fast=fast->next;
//         }
//         return cnt;
//     }
// };