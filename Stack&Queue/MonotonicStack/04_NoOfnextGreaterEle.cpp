// class Solution{
//     public:
    
//         vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
//             //write your code here
//             vector<int>ans;
//             int j=0;
//             while(queries--){
//                int cnt=0;
//                for(int i=indices[j]+1;i<arr.size();i++){
//                    if(arr[indices[j]]<arr[i]){
//                        cnt++;
//                    }
//                }
//                ans.push_back(cnt);
//                j++;
//            }
//            return ans;
//         }
    
//     };