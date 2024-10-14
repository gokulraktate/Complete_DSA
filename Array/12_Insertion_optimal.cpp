#include <bits/stdc++.h>
using namespace std;
 
 vector<int> Intersection(vector<int> &a,vector<int> &b){
    int n=a.size();
    int n1=b.size();
    vector<int>ans;
    int i=0,j=0;

    while(i<n && j<n1){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
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

    vector<int>res=Intersection(a,b);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}