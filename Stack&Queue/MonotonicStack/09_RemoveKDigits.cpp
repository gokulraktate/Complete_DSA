// class Solution {
//     public:
//         string removeKdigits(string num, int k) {
//             stack<char>st;
//             int n=num.size();
//             for(int i=0;i<n;i++){
//                 while(!st.empty() && k>0 && (st.top() -'0') > (num[i]-'0')){
//                     st.pop();
//                     k--;
//                 }
//                 st.push(num[i]);
//             }
//             while(k){
//                 st.pop();
//                 k--;
//             }
//             if(st.empty()) return "0";
    
//             string res="";
//             while(!st.empty()){
//                 res=res+st.top();
//                 st.pop();
//             }
//             while(res.size()!=0 && res.back()=='0'){
//                 res.pop_back();
//             }
//             reverse(res.begin(),res.end());
//             if(res.empty()) return "0";
//             return res;
//         }
//     };



// optimal



// class Solution {
//     public:
//         string removeKdigits(string num, int k) {
//             string st; 
//             for (char c : num) {
//                 while (!st.empty() && k > 0 && st.back() > c) {
//                     st.pop_back(); 
//                     k--;
//                 }
//                 st.push_back(c); 
//             }
            
//             while (k-- > 0 && !st.empty()) {
//                 st.pop_back(); 
//             }
    
           
//             int start = 0;
//             while (start < st.size() && st[start] == '0') {
//                 start++;
//             }
    
//             string res = st.substr(start); 
//             return res.empty() ? "0" : res;
//         }
//     };
    