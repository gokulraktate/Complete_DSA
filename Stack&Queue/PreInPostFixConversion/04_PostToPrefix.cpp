// class Solution {
//     public:
//       string postToPre(string post_exp) {
//           // Write your code here
//           int n=post_exp.size();
//           stack<string>st;
          
//           for(int i=0;i<n;i++){
//               if(post_exp[i]=='+' || post_exp[i]=='-' || post_exp[i]=='*' || post_exp[i]=='/'){
//                   string a=st.top();
//                   st.pop();
//                   string b=st.top();
//                   st.pop();
                  
//                   string ans=post_exp[i] + b + a;
                  
//                   st.push(ans);
//               }
//               else{
//                   st.push(string(1,post_exp[i]));
//               }
//           }
//           return st.top();
//       }
//   };