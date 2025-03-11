// class Solution {
//     public:
//         int trap(vector<int>& height) {
//             int n = height.size();
//             if (n == 0) return 0;
    
//             vector<int> prefixmax(n), suffixmax(n);
//             prefixmax[0] = height[0];
//             for (int i = 1; i < n; i++) {
//                 prefixmax[i] = max(prefixmax[i - 1], height[i]);
//             }
    
//             suffixmax[n - 1] = height[n - 1];
//             for (int i = n - 2; i >= 0; i--) {
//                 suffixmax[i] = max(suffixmax[i + 1], height[i]);
//             }
    
//             int total = 0;
//             for (int i = 0; i < n; i++) {
//                 total += min(prefixmax[i], suffixmax[i]) - height[i];
//             }
            
//             return total;
//         }
//     };



// optimal



// class Solution {
//     public:
//         int trap(vector<int>& height) {
//             int n = height.size();
//             int lmax = 0, rmax = 0, total = 0, l = 0, r = n - 1;
    
//             while (l!=r) {
//                 if (height[l] <= height[r]) {
//                     if (lmax > height[l]) {
//                         total += lmax - height[l];
//                     } else {
//                         lmax = height[l];
//                     }
//                     l++;
//                 } else {
//                     if (rmax > height[r]) {
//                         total += rmax - height[r];
//                     } else {
//                         rmax = height[r];
//                     }
//                     r--;
//                 }
//             }
//             return total;
//         }
//     };