#include <bits/stdc++.h>
using namespace std;
 
 vector<int> temp;

//  void zeroAtEnd(vector<int> &arr){
//      for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//      }
//      for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//      }
//      for(int i=temp.size();i<arr.size();i++){
//         arr[i]=0;
//      }

//  }


//or

//with best time complexity
void zeroAtEnd(vector<int> &arr){
int j=-1;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
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
    zeroAtEnd(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
} 