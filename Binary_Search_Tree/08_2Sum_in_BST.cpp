/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

 
// brute force


// class Solution {
// public:
//     bool findTarget(TreeNode* root, int k) {
//         vector<int> a;
//         solve(root,a);
//         return Check(a,k);
//     }
    
//     void solve(TreeNode* root, vector<int>& a) {
//         if (root == NULL) {
//             return;
//         }

//         solve(root->left, a);
//         a.push_back(root->val);
//         solve(root->right, a);
//     }
//     bool Check(vector<int>& a, int &k){
//         int l=0,r=a.size()-1;
//         while(l<r){
//             if(a[l]+a[r]==k){
//                 return true;
//                 break;
//             }
//             if(a[l]+a[r]<k){
//                 l++;
//             }
//             if(a[l]+a[r]>k){
//                 r--;
//             }
//         }
//         return false;
//     }
// };