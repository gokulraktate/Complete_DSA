/*
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */



// class Solution {
// public:
//     void deleteAllOccurOfX(Node** head_ref, int x) {
//         Node* temp = *head_ref;

//         while (temp) {
//             if (temp->data == x) {
//                 Node* nextNode = temp->next;
//                 Node* prevNode = temp->prev;

//                 if (prevNode) 
//                     prevNode->next = nextNode;
//                 else 
//                     *head_ref = nextNode; // Update head if first node is deleted

//                 if (nextNode) 
//                     nextNode->prev = prevNode;

//                 delete temp; // Free memory
//                 temp = nextNode;
//             } else {
//                 temp = temp->next;
//             }
//         }
//     }
// };