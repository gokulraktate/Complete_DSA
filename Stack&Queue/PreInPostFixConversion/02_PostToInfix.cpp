
// class Solution {
//     public:
//       string postToInfix(string exp) {
//           // Write your code here
//           int n=exp.size();
          
//           stack<string>st;
          
//           for(int i=0;i<n;i++){
//               if(exp[i]=='+' ||exp[i]=='-' ||exp[i]=='*' ||exp[i]=='/'){
//                   string t1=st.top();
//                   st.pop();
//                   string t2=st.top();
//                   st.pop();
                  
//                   string ans='(' + t2 + exp[i] + t1 + ')';
//                   st.push(ans);
//               }
//               else{
//                   st.push(string(1,exp[i]));    //char to string
//               }
//           }
//           return st.top();
//       }
//   };