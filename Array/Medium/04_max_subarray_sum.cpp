#include <bits/stdc++.h>
using namespace std;
 
//  brute force
// int MaxSASum(vector<int> &a,int n){
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<j;k++){
//                 sum+=a[k];
                
//             }
//             maxi=max(sum,maxi);
//         }
//     }
//     return maxi;
// }


// better

// int MaxSASum(vector<int> &a,int n){
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){  
//             sum+=a[j];   
//             maxi=max(sum,maxi); 
//         }
//     }
//     return maxi;
// }



// Optimal

int MaxSASum(vector<int> &a,int n){
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=a[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
        // if(maxi<0){
        //     return maxi=0;
        // }
    }
    return maxi;
}

 
int main()
{
    vector<int> a={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(a)-sizeof(a[0]);
    int ans=MaxSASum(a,n);
    cout<<ans;
    return 0;
}