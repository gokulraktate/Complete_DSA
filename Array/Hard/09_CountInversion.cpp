// brute force

// class Solution {
//   public:
//     // Function to count inversions in the array.
//     int inversionCount(vector<int> &arr) {
//         // Your Code Here
//         int cnt=0;
        
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]>arr[j]){
//                     cnt++;
//                 }
//             }  
//         }
//         return cnt;
//     }
// };



// optimal
// using merge sort approach

// #include <iostream>
// #include <vector>
// using namespace std;

// long long mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
//     int i = left;    // Starting index for left subarray
//     int j = mid + 1; // Starting index for right subarray
//     int k = left;    // Starting index to be sorted
//     long long inv_count = 0;

//     // Merge two sorted subarrays and count inversions
//     while ((i <= mid) && (j <= right)) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//             inv_count += (mid - i + 1); // Count inversions
//         }
//     }

//     // Copy the remaining elements of left subarray, if any
//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }

//     // Copy the remaining elements of right subarray, if any
//     while (j <= right) {
//         temp[k++] = arr[j++];
//     }

//     // Copy the sorted subarray into the original array
//     for (int i = left; i <= right; i++) {
//         arr[i] = temp[i];
//     }

//     return inv_count;
// }

// long long mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
//     long long inv_count = 0;
//     if (left < right) {
//         int mid = (left + right) / 2;

//         // Count inversions in left, right, and merged subarrays
//         inv_count += mergeSortAndCount(arr, temp, left, mid);
//         inv_count += mergeSortAndCount(arr, temp, mid + 1, right);
//         inv_count += mergeAndCount(arr, temp, left, mid, right);
//     }
//     return inv_count;
// }

// int inversionCount(vector<int>& arr) {
//     vector<int> temp(arr.size());
//     return mergeSortAndCount(arr, temp, 0, arr.size() - 1);
// }
