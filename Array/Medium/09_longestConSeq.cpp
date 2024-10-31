// // brute force


// #include <bits/stdc++.h>
// using namespace std;

// bool linearSearch(vector<int>&a, int num) {
//     int n = a.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (a[i] == num)
//             return true;
//     }
//     return false;
// }
// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size(); //size of array
//     int longest = 1;
//     //pick a element and search for its
//     //consecutive numbers:
//     for (int i = 0; i < n; i++) {
//         int x = a[i];
//         int cnt = 1;
//         //search for consecutive numbers
//         //using linear search:
//         while (linearSearch(a, x + 1) == true) {
//             x += 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }



//better


#include <bits/stdc++.h>
using namespace std;
 
 class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=0,longest=1,prev=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==prev){
                cnt++;
                prev=nums[i];
            }
            else if(nums[i]!=prev){
                cnt=1;
                prev=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};

// int main()
// {
//     return 0;
// }




//optimal

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         if(n==0){
//             return 0;
//         }
//         int cnt=0;
//         int longest=1;

//         unordered_set<int> st;
//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);
//         }
//         for(auto it: st){
//             if(st.find(it-1)==st.end()){
//                 cnt=1;
//                 int x=it;

//                 while(st.find(x+1)!=st.end()){
//                     x=x+1;
//                     cnt++;

//                 }
                
//             }
//             longest=max(cnt,longest);
//         }
        
//         return longest;
//     }
// };
