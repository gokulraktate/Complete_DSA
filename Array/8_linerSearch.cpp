#include <bits/stdc++.h>
using namespace std;
 
 int LinearSearch(vector<int> &a,int key){
    int n=a.size();
    
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;

 }
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter Key to search:";
    cin>>key;
    int res=LinearSearch(a,key);
    cout<<res;
    return 0;
}