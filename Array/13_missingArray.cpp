// // #include <bits/stdc++.h>
// // using namespace std;
 
// //  int missing(vector <int>&a,int n){
// //     int i;
// //     for(i=1;i<=n;i++){
// //         int flag=0;
// //         for(int j=0;j<n;j++){
// //             if(a[j]==i){
// //                 flag=1;
// //                 break;
// //             }
// //         }
// //         if(flag==0){
// //         return i;
// //     }
// //     }
// //     return -1;
    
// //  }
 
// // int main()
// // {
// //     int n=5;
// //     vector<int> a={1,2,4,5};
    
// //    int ans= missing(a,n);
// //    cout<<ans;
// //     return 0;
// // }



// //using Hash array

// #include <bits/stdc++.h>
// using namespace std;
 
//  int missing(vector <int> &a,int n){
//     int hash[n+1]={0};
//     for(int i=0;i<n-1;i++){
//         hash[a[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
//  }
 
// int main()
// {
//     int n=5;
//     vector<int> a={1,2,4,5};
//     int ans=missing(a,n);
//     cout<<ans;
//     return 0;
// }




//optimal

// #include <bits/stdc++.h>
// using namespace std;
 
//  int missing(vector <int>&a,int n){
//     if(n==a.size()){
//         return -1;
//     }
//     int sum=(n*(n+1))/2;
//     int s=0;

//     for(int i=0;i<n-1;i++){
//         s+=a[i];
//     }
//     int res=sum-s;
//     return res;
//  }
 
// int main()
// {
//     int n=5;
//     vector<int> a={1,2,4,5};
//     int ans=missing(a,n);
//     cout<<ans;
//     return 0;
// }



//or

// using XOR


#include <bits/stdc++.h>
using namespace std;
 
 int missing(vector <int> &a,int n){
    int xor1=0;
    int xor2=0;

    for(int i=0;i<n-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor2^xor1;
 }
 
int main()
{
    int n=5;
    vector<int> a={1,2,4,5};
     int ans=missing(a,n);
     cout<<ans;
    return 0;
} 