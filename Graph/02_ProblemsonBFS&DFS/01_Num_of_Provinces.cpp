// class Solution {

// private:
//     void dfs(int node , vector<vector<int>>& adjlist , vector<int>&vis){
//         vis[node]=1;
//         for(auto it: adjlist[node]){
//             if(!vis[it]){
//                 dfs(it,adjlist,vis);
//             }
//         }
//     }


// public:
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         vector<vector<int>> adjlist(n);

//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(isConnected[i][j]==1 && i!=j){
//                     adjlist[i].push_back(j);
//                     adjlist[j].push_back(i);
//                 }
//             }
//         }

//         vector<int>vis(n,0);
//         int cnt=0;

//         for(int i=0;i<isConnected.size();i++){
//             if(!vis[i]){
//                 dfs(i,adjlist,vis);
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// };