#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       int i=0;
       for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
       }
       return i+1;
    }
};





// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
        
//         set<int> st;
//         for(int i=0;i<nums.size();i++){
//             st.insert(nums[i]);
//         }
//         int index=0;
//         for(auto it:st){
//             nums[index]=it;
//             index++;
//         }
//          for(int i=0;i<nums.size();i++){
//             cout<<nums[i];
//          }
//          return index;
//     }
// };