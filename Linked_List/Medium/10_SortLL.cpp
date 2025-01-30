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
//     ListNode* sortList(ListNode* head) {
//         vector<int>arr;
//         ListNode* temp=head;
//         while(temp){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         sort(arr.begin(),arr.end());
//         int cnt=0;
//         while(temp){
//             temp->val=arr[cnt];
//             cnt++;
//             temp=temp->next;
//         }
//         return head;
//     }
// };