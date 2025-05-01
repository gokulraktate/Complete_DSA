// class Solution {
//     public:
//         // Function to find the path from the
//         // root to a given node with value 'x'
//         bool getPath(TreeNode* root, vector<int>& arr, int x) {
//             // Base case: If the current
//             // node is null, return false
//             if (!root) {
//                 return false;
//             }
    
//             // Add the current node's
//             // value to the path vector
//             arr.push_back(root->val);
    
//             // If the current node's value is equal
//             // to the target value 'x', return true
//             if (root->val == x) {
//                 return true;
//             }
    
//             // Recursively search for the target value
//             // 'x' in the left and right subtrees
//             if (getPath(root->left, arr, x)
//                 || getPath(root->right, arr, x)) {
//                 return true;
//             }
    
//             // If the target value 'x' is not found
//             // in the current path, backtrack
//             arr.pop_back();
//             return false;
//         }
    
//         // Function to find and return the path from
//         // the root to a given node with value 'B'
//         vector<int> solve(TreeNode* A, int B) {
//             // Initialize an empty
//             // vector to store the path
//             vector<int> arr;
    
//             // If the root node is null,
//             // return the empty path vector
//             if (A == NULL) {
//                 return arr;
//             }
    
//             // Call the getPath function to find
//             // the path to the node with value 'B'
//             getPath(A, arr, B);
    
//             // Return the path vector
//             return arr;
//         }
//     };
    