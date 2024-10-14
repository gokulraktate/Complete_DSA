#include <bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int>&a,vector<int> &b){
    int n=a.size();
    int n1=b.size();

    set <int> st;

    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n1;i++){
        st.insert(b[i]);
    }

    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }

    return temp;

} 
 
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter next...";
    int n1;
    cin>>n1;
    vector<int> b(n1);
    for(int i=0;i<n1;i++){
        cin>>b[i];
    }

    
    vector<int>temp=Union(a,b);
    
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}