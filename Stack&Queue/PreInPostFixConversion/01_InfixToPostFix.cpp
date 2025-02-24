// class Solution {
//     public:
//       // Function to convert an infix expression to a postfix expression.
//           int prec(char c) {
//           if (c == '^') return 3;
//           else if (c == '/' || c == '*') return 2;
//           else if (c == '+' || c == '-') return 1;
//           return -1; // For '(' and other characters
//       }
  
//       // Function to convert an infix expression to a postfix expression.
//       string infixToPostfix(string& s) {
//           stack<char> st;
//           string ans;
          
//           for (int i = 0; i < s.size(); i++) {
//               char c = s[i];
  
//               // If the character is an operand (letter or digit), add it to the output
//               if (isalnum(c)) {
//                   ans += c;
//               }
//               // If the character is '(', push it onto the stack
//               else if (c == '(') {
//                   st.push(c);
//               }
//               // If the character is ')', pop and output from the stack until '(' is found
//               else if (c == ')') {
//                   while (!st.empty() && st.top() != '(') {
//                       ans += st.top();
//                       st.pop();
//                   }
//                   st.pop(); // Remove the '(' from the stack
//               }
//               // If an operator is encountered
//               else {
//                   while (!st.empty() && prec(c) <= prec(st.top())) {
//                       ans += st.top();
//                       st.pop();
//                   }
//                   st.push(c);
//               }
//           }
  
//           // Pop all remaining operators from the stack
//           while (!st.empty()) {
//               ans += st.top();
//               st.pop();
//           }
  
//           return ans;
//       }
//   };