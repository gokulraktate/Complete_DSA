// class Solution {
//     public:
//       int celebrity(vector<vector<int> >& mat) {
//           // code here
//           int n=mat.size();
//           vector<int>KnowMe(n,0);
//           vector<int>IKnow(n,0);
          
//           for(int i=0;i<n;i++){
//               for(int j=0;j<n;j++){
//                   if(mat[i][j]==1){
//                       KnowMe[j]++;
//                       IKnow[i]++;
//                   }
//               }
//           }
//           for(int i=0;i<n;i++){
//               if(KnowMe[i]==n-1 && IKnow[i]==0){
//                   return i;
//               }
              
//           }
//           return -1;
//       }
//   };
  


// optimal


// class Solution {
//     public:
//       int celebrity(vector<vector<int>>& mat) {
//           int n = mat.size();
//           int top = 0, down = n - 1;
          
//           // Step 1: Finding the potential celebrity
//           while (top < down) {
//               if (mat[top][down] == 1) {
//                   // If 'top' knows 'down', 'top' can't be a celebrity
//                   top++;
//               } else {
//                   // If 'down' knows 'top', 'down' can't be a celebrity
//                   down--;
//               }
//           }
  
//           // Step 2: Verifying if 'top' is actually a celebrity
//           for (int i = 0; i < n; i++) {
//               if (i != top) { 
//                   // A celebrity should not know anyone, and everyone should know them
//                   if (mat[top][i] == 1 || mat[i][top] == 0) {
//                       return -1;
//                   }
//               }
//           }
          
//           return top;
//       }
//   };
  