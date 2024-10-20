#include <bits/stdc++.h>
using namespace std;

 //brute force

// using merge sort

 //better

//  void Sort(vector<int> &a,int n){
//     int cnt1=0;
//     int cnt2=0;
//     int cnt3=0;

//     for(int i=0;i<n;i++){
//         if(a[i]==0){
//             cnt1++;
//         }
//         if(a[i]==1){
//             cnt2++;
//         }
//         if(a[i]==0){
//             cnt3++;
//         }
//     }
//     for(int i=0;i<cnt1;i++){
//         a[i]=0;
//     }
//     for(int i=cnt1;i<cnt1+cnt2;i++){
//         a[i]=1;
//     }
//     for(int i=cnt1+cnt2;i<cnt1+cnt2+cnt3;i++){
//         a[i]=2;
//     }
//  }

// Optimal

// using Dutch National Flag Algorithm

void Sort(vector <int> &a,int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
}

 
int main()
{
    int n=10; 
    vector<int>a={0,1,2,1,2,1,0,0,1,0};
    Sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}