// class Solution {
//   public:
//     int countSubstr(string& s, int k) {
//     int n = s.size();
//     int res = 0;

//     for (int i = 0; i < n; i++) {
//         int distinct = 0;
//         int cnt[26] = {0}; 

//         for (int j = i; j < n; j++) {
//             if (cnt[s[j] - 'a'] == 0) {
//                 distinct++;
//             }
//             cnt[s[j] - 'a']++;

//             if (distinct == k) {
//                 res++;
//             } else if (distinct > k) {
//                 break; 
//             }
//         }
//     }

//     return res;
// }

// };