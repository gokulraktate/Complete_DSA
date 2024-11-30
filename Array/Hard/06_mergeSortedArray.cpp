// brute force


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         long long nums3[n+m];
//         int left=0;
//         int right=0;
//         int index=0;
//         while(left<m && right<n){
//             if(nums1[left]<=nums2[right]){
//                 nums3[index]=nums1[left];
//                 left++,index++;
//             }
//             else{
//                 nums3[index]=nums2[right];
//                 right++,index++;
//             }
//         }
//         while(left<m){
//             nums3[index++]=nums1[left++];
//         }
//         while(right<n){
//             nums3[index++]=nums2[right++];
//         }

//         for(int i=0;i<m+n;i++){
           
//                 nums1[i]=nums3[i];
           
//         }
//     }
// };



// better

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int left=m-1;
//         int right=0;

//         while(left>=0 && right<n){
//             if(nums1[left]>nums2[right]){
//                 swap(nums1[left],nums2[right]);
//                 left--;
//                 right++;
//             }
//             else{
//                 break;
//             }
//         }
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//     }
// };