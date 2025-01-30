/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// Brute Force


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         unordered_set<ListNode*>st;
//         ListNode* temp=headA;
//         ListNode* temp1=headB;

//         while(temp){
//             st.insert(temp);
//             temp=temp->next;
//         }
//         while(temp1){
//             if(st.find(temp1)!=st.end()){
//                 return temp1;
//             }
//             temp1=temp1->next;
//         }
//         return NULL;
//     }
// };


// better


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* t1=headA;
//         ListNode* t2=headB;
//         int cnt1=0,cnt2=0;

//         if(t1==t2){
//                 return t1;
//             }

//         while(t1){
//             cnt1++;
//             t1=t1->next;
//         }
//         while(t2){
//             cnt2++;
//             t2=t2->next;
//         }
//         t1=headA;
//         t2=headB;

//         int diff=abs(cnt1-cnt2);
//         if(cnt1>cnt2){
//             while(diff){
//                 diff--;
//                 t1=t1->next;
//             }
//         }
//         else{
//             while(diff){
//                 diff--;
//                 t2=t2->next;
//             }
//         }

//         while(t1){
//             if(t1==t2){
//                 return t1;
//             }
//             t1=t1->next;
//             t2=t2->next;
            
//         }
//         return NULL;
//     }
// };


// Optimal


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* temp1=headA;
//         ListNode* temp2=headB;
//         if(headA==NULL || headB==NULL) return NULL;

//         while(temp1!=temp2){
//             temp1=temp1->next;
//             temp2=temp2->next;
            
//             if(temp1==temp2){
//                 return temp1;
//             }

//             if(temp1==NULL){
//                 temp1=headB;
//             }
//             if(temp2==NULL){
//                 temp2=headA;
//             }
            
            
//         }
//         return temp1;
//     }
// };