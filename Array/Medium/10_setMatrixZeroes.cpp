// // #include <bits/stdc++.h>
// // using namespace std;
 
// //  //brute force


// // class Solution {
// // public:
// //     void setZeroes(vector<vector<int>>& matrix) {
// //         int n = matrix.size();
// //         int m = matrix[0].size();

// //         for (int i = 0; i < n; i++) {
// //             for (int j = 0; j < m; j++) {
// //                 if (matrix[i][j] == 0) {
// //                     markRow(matrix, i, m);
// //                     markCol(matrix, j, n);
// //                 }
// //             }
// //         }

// //         // Convert all -1 marks to 0
// //         for (int i = 0; i < n; i++) {
// //             for (int j = 0; j < m; j++) {
// //                 if (matrix[i][j] == -1) {
// //                     matrix[i][j] = 0;
// //                 }
// //             }
// //         }
// //     }

// // private:
// //     void markRow(vector<vector<int>>& matrix, int i, int m) {
// //         for (int j = 0; j < m; j++) {
// //             if (matrix[i][j] != 0) {
// //                 matrix[i][j] = -1;
// //             }
// //         }
// //     }

// //     void markCol(vector<vector<int>>& matrix, int j, int n) {
// //         for (int i = 0; i < n; i++) {
// //             if (matrix[i][j] != 0) {
// //                 matrix[i][j] = -1;
// //             }
// //         }
// //     }
// // };








// //better


// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         vector<int> row(n,0);
//         vector<int> col(m,0);

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     row[i]=1;
//                     col[j]=1;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(row[i]==1 || col[j]==1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };


