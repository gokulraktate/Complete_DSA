#include <bits/stdc++.h>
using namespace std;


void rotate(vector <int> & arr,int d){
    vector <int> temp;
      for(int i=0;i<d;i++){  
        temp.push_back(arr[i]);
      }

      for(int i=d;i<arr.size();i++){
        arr[i-d]=arr[i];
      }

      for (int i = 0; i < arr.size(); i++) {
        arr[ arr.size()- d + i] = temp[i];
    }
} 
 
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int d;
    cout<<"enter no to rotate:";
    cin>>d;
    rotate(arr,d);

    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    return 0;
}