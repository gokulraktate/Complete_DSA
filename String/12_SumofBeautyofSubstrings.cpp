// class Solution {
// public:
//     int beautySum(string s) {
//         int n=s.size();
//         int ans=0;

//         for(int i=0;i<n;i++){
//             int cnt[26]={0};
//             for(int j=i;j<n;j++){
//                 int mx=INT_MIN, mn=INT_MAX;
//                 cnt[s[j]-'a']++;
//                 for(auto x:cnt){
//                     if(x!=0){
//                         mn=min(x,mn);
//                         mx=max(x,mx);
//                     }
//                 }
//                 ans=ans+mx-mn;
//             }
//         }
//         return ans;
//     }
// };