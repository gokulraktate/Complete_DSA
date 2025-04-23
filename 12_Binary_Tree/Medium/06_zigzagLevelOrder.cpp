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
//         vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//             vector<vector<int>>a;
//             queue<TreeNode*>q;
//             q.push(root);
//             bool flag=true;
    
//             if(root==NULL){
//                 return a;
//             }
    
//             while(!q.empty()){
//                 int size=q.size();
//                 vector<int>b(size);
//                 for(int i=0;i<size;i++){
//                     TreeNode* node=q.front();
//                     q.pop();
    
//                     int index=(flag) ? i : size-i-1;
    
//                     b[index]=node->val;
    
//                     if(node->left){
//                         q.push(node->left);
//                     }
//                     if(node->right){
//                         q.push(node->right);
//                     }
//                 }
//                 flag=!flag;
//                 a.push_back(b);
//             }
//             return a;
//         }
//     };