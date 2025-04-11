// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     public:
//         void solve(TreeNode* root,vector<int>&a){
//             if(root==NULL){
//                 return;
//             }
    
//             solve(root->left,a);
//             solve(root->right,a);
//             a.push_back(root->val);
//         }
//         vector<int> postorderTraversal(TreeNode* root) {
//             vector<int>a;
//             solve(root,a);
//             return a;
//         }
//     };