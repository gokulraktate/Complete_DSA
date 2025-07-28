/*

class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        
        vector<vector<int>> adj(V);
            for (auto &e : edges) {
                adj[e[0]].push_back(e[1]);
            }
        // code here
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        if(topo.size()==V) return false;
        return true;
    }
};

*/