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

// BRUTE FORCE



// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         vector<int> a;
//         ListNode* temp = head;
//         if(head==NULL || head->next==NULL) return head;
        
//         while (temp!= NULL && temp->next!=NULL) {
//             a.push_back(temp->val);
//             temp = temp->next->next;
//         }
//         if(temp) a.push_back(temp->val);

//         temp = head->next;
//         while (temp!= NULL && temp->next!=NULL) {
//             a.push_back(temp->val);
//             temp = temp->next->next;
//         }
//         if(temp) a.push_back(temp->val);

//         int cnt = 0;
//         temp = head;
//         while (temp != NULL) {
//             temp->val = a[cnt];
//             cnt++;
//             temp = temp->next;
//         }
//         return head;
//     }
// };



// OPTIMAL


// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;

//         ListNode* odd=head;
//         ListNode* even=head->next;
//         ListNode* evenHead=head->next;
//         while(even!=NULL && even->next!=NULL){
//             odd->next=odd->next->next;
//             odd=odd->next;

//             even->next=even->next->next;
//             even=even->next;
//         }
//         odd->next=evenHead;
//         return head;
//     }
// };
