#include <bits/stdc++.h>
using namespace std;
 
 vector<int> insertion(vector<int>&a,vector<int>&b){
    vector<int>ans;
    int n=a.size();
    int n1=b.size();
    vector <int> vis(n1,0);
    int i,j;

    for( i=0;i<n;i++){
        for( j=0;j<n1;j++){
             if(a[i]==b[j]  && vis[j]==0){
                    ans.push_back(a[i]);
                    vis[j]=1;
                    break;
             }
        }
        if(j < n1 && b[j] > a[i]) {
            break;
        
        }
    }
    return ans;

 }
 
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter next array...";
    int n1;
    cin>>n1;
    vector<int> b(n1);
    for(int i=0;i<n1;i++){
        cin>>b[i];
    }

    vector<int> result = insertion(a, b);  // Capture the result
    for(int i : result) {
        cout << i << " ";  // Print the result
    }
    return 0;
}