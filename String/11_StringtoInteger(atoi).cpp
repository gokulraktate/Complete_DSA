// #include <climits> // For INT_MAX and INT_MIN

// class Solution {
// public:
//     int myAtoi(string s) {
//         int ans = 0;
//         int i = 0;
//         int sign = 1;

//         // Skip whitespaces
//         while (i < s.size() && s[i] == ' ') {
//             i++;
//         }

//         // Check for the sign
//         if (i < s.size() && (s[i] == '-')) {
//             sign = -1;
//             i++;
//         } else if (i < s.size() && (s[i] == '+')) {
//             sign = 1;
//             i++;
//         }

//         // Convert digits to integer
//         while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
//             int digit = s[i] - '0';

//             // Check for overflow
//             if (ans > (INT_MAX - digit) / 10) {
//                 return sign == 1 ? INT_MAX : INT_MIN;
//             }

//             ans = ans * 10 + digit;
//             i++;
//         }

//         return ans * sign;
//     }
// };
