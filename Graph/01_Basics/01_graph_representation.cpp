#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,m;
    cin>>n>>m;

    // graph representation

    // by adjacency matrix
    // int adj[n+1][m+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }



    // by adjacency list
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}