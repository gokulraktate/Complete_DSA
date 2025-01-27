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


// Brute Force


// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head->next==NULL & n==1) return NULL;
        
//         ListNode* temp=head;
//         int cnt=0;
//         while(temp){
//             cnt++;
//             temp=temp->next;
//         }
//         if(cnt==n){
//             ListNode* prev=head;
//             head=head->next;
//             delete(prev);
//             return head;
//         }
//         temp=head;
//         while(temp){
            
//             if(cnt==n+1){
//                 ListNode* target=temp->next;
//                 temp->next=temp->next->next;
//                 delete(target);
//                 return head;
//             }
//             cnt--;
//             temp=temp->next;
//         }
//         return head;
//     }
// };


// Optimal

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         if(head->next==NULL && n==1)  return NULL;

//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }
//         if(fast==NULL) return head->next;

//         while(fast->next){
//             slow=slow->next;
//             fast=fast->next;
//         }
        

//         ListNode* delNode=slow->next;
//         slow->next=slow->next->next;
//         delete(delNode);
//         return head;
//     }
// };