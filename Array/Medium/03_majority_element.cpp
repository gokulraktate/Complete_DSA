#include <bits/stdc++.h>
using namespace std;
 
 //brute force
//  int majority(vector <int>&a,int n){
//     for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 cnt++;
//             }
//         }
//         if(cnt>n/2){
//             return a[i];
//         }
//     }
//     return -1;
//  }


//Better
//using HashMap

// int majority(vector <int>&a,int n){
//     map<int,int>mpp;

//     for(int i=0;i<n;i++){
//         mpp[a[i]]++;
//     }

//     for(auto it:mpp){
//         if(it.second>n/2){
//             return it.first;
//         }
//     }
//     return -1;
// }


//Optimal

// Moore's Voting Algorithm

int majority(vector <int>&a,int n){
     int cnt=0;
     int ele;

     for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=a[i];
        }
        else if(a[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
     }
     int c=0;
     for(int i=0;i<n;i++){
        if(a[i]==ele){
            c++;
        }
     }
     if(c>n/2){
        return ele;
     }
     return -1;

}


 
int main()
{
    int n=20;
    vector<int>a={1,4,4,2,4,4,4,4,1,2,6,4,4,4,4,2,1,0,0,4};
    int ans=majority(a,n);
    cout<<ans;
    return 0;
}