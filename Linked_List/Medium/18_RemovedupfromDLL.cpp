/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/


// brute Force


// class Solution
// {
// public:

//     Node* removeDuplicates(Node* head) {
//     if (!head) return NULL;  

//     Node* temp = head;
    
//     while (temp && temp->next) {
//         if (temp->data == temp->next->data) {
            
//             Node* toDelete = temp->next;
//             temp->next = toDelete->next;

//             if (toDelete->next) {
//                 toDelete->next->prev = temp;
//             }

//             delete toDelete;
//         } else {
//             temp = temp->next;  
//         }
//     }

//     return head;
// }