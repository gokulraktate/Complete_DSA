// //brute force

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int mat[n][m];

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 mat[j][n-1-i]=matrix[i][j];
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 matrix[i][j]=mat[i][j];
//             }
//         }
//     }
    
// };



// better and optimal

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
//     }
    
// };

