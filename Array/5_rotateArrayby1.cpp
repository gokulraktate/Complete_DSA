#include <bits/stdc++.h>
using namespace std;
 
 void rotate(vector <int> &arr){
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
    
 }
 
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
 