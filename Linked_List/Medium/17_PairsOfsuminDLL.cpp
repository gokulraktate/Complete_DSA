/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/


// brute force

// class Solution
// {
// public:
//     vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
//     {
//         // code here
//         Node* temp1=head;
//         Node* temp2=head->next;
        
//         vector<pair<int,int>>ans;
        
//         while(temp1){
//             temp2=temp1->next;
//             while(temp2 && temp1->data+temp2->data<=target){
//                 if(temp1->data+temp2->data==target){
//                     ans.push_back({temp1->data,temp2->data});
//                 }
//                 temp2=temp2->next;
//             }
//             temp1=temp1->next;
//         }
//         return ans;
//     }
// };



// optimal


// class Solution
// {
// public:
//     vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
//     {
//         // code here
//         Node* temp=head;
//         Node* left=head;
//         vector<pair<int,int>>ans;
//         while(temp->next){
//             temp=temp->next;
//         }
//         Node* right=temp;
//         while(left->data<right->data){
//             if(left->data+right->data==target){
//                 ans.push_back({left->data,right->data});
//                 left=left->next;
//                 right=right->prev;
//             }
//             else if(left->data+right->data<target){
//                 left=left->next;
//             }
//             else{
//                 right=right->prev;
//             }
//         }
//         return ans;
//     }
// };