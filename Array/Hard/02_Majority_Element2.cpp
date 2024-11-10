// // brute force

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector <int> list;
//         int cnt=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(list.size()==0 || list[0]!=nums[i]){
//                 cnt=0;
//                 for(int j=0;j<n;j++){
//                     if(nums[j]==nums[i]){
//                         cnt++;
//                     }
//                 }
//                 if(cnt>n/3){
//                     list.push_back(nums[i]);
//                 }
//             }
//             if(list.size()==2){
//             break;
//         }
//         }

//         return list;
//     }
// };



//better

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         map<int,int>mpp;
//         vector <int> list;
//         int min=(n/3)+1;
        
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//             if(mpp[nums[i]]==min){
//                 list.push_back(nums[i]);
//             }
//         }
//         return list;
//     }
// };