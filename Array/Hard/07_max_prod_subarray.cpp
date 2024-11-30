// // brute force

// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = INT_MIN;
//     for(int i=0;i<nums.size()-1;i++) {
//         for(int j=i+1;j<nums.size();j++) {
//             int prod = 1;
//             for(int k=i;k<=j;k++)
//                 prod *= nums[k];
//             result = max(result,prod);
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {1,2,-3,0,-4,-5};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }

// better

// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {
//         int n = nums.size();
//         int maxi = INT_MIN;

//         for (int i = 0; i < n; i++)
//         {
//             int product = 1;
//             for (int j = i; j < n; j++)
//             {

//                 product = product * nums[j];

//                 maxi = max(maxi, product);
//             }
//         }
//         return maxi;
//     }
// };




// optimal


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size();
//         int maxi=INT_MIN;
//         int pre=1;
//         int suff=0;

//         for(int i=0;i<n;i++){
//             if(pre==0) pre=1;
//             if(suff==0) suff=1;

//             pre=pre*nums[i];
//             suff=suff*nums[n-i-1];

//             maxi=max(maxi,max(pre,suff));
//         }
//         return maxi;
//     }
// };
