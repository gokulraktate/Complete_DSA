#include <bits/stdc++.h>
using namespace std;

//brute force
 
//  int TwoSum(vector<int>&a,int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 continue;
//             }
//             if(a[i]+a[j]==target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
//  }



//better 

// int TwoSum(vector<int>&a,int n,int target){
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         int num=a[i];
//         int more=target-num;

//         if(mpp.find(more)!=mpp.end()){
//             return {mpp[more],i};
//         }
//         mpp[num]=i;
//     }
//     return {};
// }


//optical

string TwoSum(vector<int>&a,int n,int target){
    int left=0;
    int right=n-1;

    sort(a.begin(),a.end());

    while(left<right){
        int sum=a[left]+a[right];
        if(sum==target){
            return "Yes";
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return "No";
}



 
int main()
{
    int n=10;
    
    vector<int>a={0,1,2,3,4,5,6,7,8,9};
    int target=14;
    string ans=TwoSum(a,n,target);
    cout<<ans;
    return 0;
}