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
// public:
//     vector<int>a;
//     void Sort(TreeNode* root){
//         if(!root) return;
//         Sort(root->left);
//         a.push_back(root->val);
//         Sort(root->right);
//     }
//     int i=0;
//     void AfterSort(TreeNode* root){
//         if(!root) return;
//         AfterSort(root->left);
//         root->val=a[i++];
//         AfterSort(root->right);
//     }

//     void recoverTree(TreeNode* root) {
//         Sort(root);
//         sort(a.begin(),a.end());
//         AfterSort(root);
//     }
// };