// class Solution {
//     public:
//       string preToInfix(string pre_exp) {
//           // Write your code here
//           int n=pre_exp.size();
//           stack<string>st;
          
//           for(int i=n-1;i>=0;i--){
//               if(pre_exp[i]=='+' || pre_exp[i]=='-' || pre_exp[i]=='*' || pre_exp[i]=='/'){
//                   string a=st.top();
//                   st.pop();
//                   string b=st.top();
//                   st.pop();
                  
//                   string ans='(' + a + pre_exp[i] + b + ')';
//                   st.push(ans);
//               }
//               else{
//                   st.push(string(1,pre_exp[i]));
//               }
//           }
//           return st.top();
//       }
//   };