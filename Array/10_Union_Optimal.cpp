#include <bits/stdc++.h>
using namespace std;
 
vector <int> Union(vector<int>&a,vector<int>&b){
    int n=a.size();
    int n1=b.size();
    int i=0;
    int j=0;
    vector<int> unionArr;
    while(i<n && j<n1)
      if(a[i]<=b[j]){
        if(unionArr.size()==0 || unionArr.back()!=a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
      }
      else{
        if(unionArr.size()==0 || unionArr.back()!=b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
      }

      while(i<n){
        if(unionArr.size()==0 || unionArr.back()!=a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
      }
      while(j<n1){
        if(unionArr.size()==0 || unionArr.back()!=b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
      }
     
    


    return unionArr;
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
    
    vector<int>res= Union(a,b);
    for(int i=0;i<res.size();i++){
       cout<<res[i]<<" ";
    }
       
    return 0;
}