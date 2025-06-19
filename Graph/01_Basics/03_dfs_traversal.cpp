// class Solution {
//   private:
//     void dfs_fun(int node,vector<vector<int>>& adj , int vis[] , vector<int>&ans){
//         vis[node]=1;
//         ans.push_back(node);
        
//         // treverse all the adj list
//         for(auto it:adj[node]){
//             if(!vis[it]){
//                 dfs_fun(it,adj,vis,ans);
//             }
//         }
//     }
//   public:
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int vis[adj.size()]={0};
//         int start=0;
//         vector<int>ans;
//         dfs_fun(start,adj,vis,ans);
//         return ans;
//     }
// };