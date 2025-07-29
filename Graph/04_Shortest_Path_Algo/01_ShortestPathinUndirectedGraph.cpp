/*

class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n=adj.size();
        vector<int>ans(n,1e9);
        
        ans[src]=0;
        
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node]){
                if(ans[node]+1 < ans[it]){
                    ans[it]=ans[node]+1;
                    q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(ans[i]==1e9) ans[i]=-1;
        }
        return ans;
    }
};

*/
