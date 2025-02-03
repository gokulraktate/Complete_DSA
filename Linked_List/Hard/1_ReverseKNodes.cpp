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

// brute force


// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//          ListNode* temp=head;
//          ListNode* t1;
//          stack<int>st;
//          int cnt=0;
//          int nodes=0;

//         if (!head || k == 1) return head;

//          while(temp){ 
//             nodes++;
//             temp=temp->next;
//          }
//          if(nodes<k) return head;

//          temp=head;
//          while(temp){
//             t1=temp;
//             cnt=0;
//             while(cnt!=k && t1){
//                 st.push(t1->val);
//                 cnt++;
//                 t1=t1->next;
//             }
//             if(cnt<k) break;

//             while(cnt){
//                 temp->val=st.top();
//                 st.pop();
//                 temp=temp->next;
//                 cnt--;
//             }

//          }
//          return head;
//     }
// };