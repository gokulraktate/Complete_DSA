#include <bits/stdc++.h>
using namespace std;

//brute force
 
//  int maxProfit(vector<int>& a,int n) {
//         int n=a.size();
//         int maxi=0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 maxi=max(a[j]-a[i],maxi);
//             }
//         }
//         if(maxi<0){
//             return 0;
//         }
//         return maxi;
//     }


// Optimal
int maxProfit(vector<int>& a,int n) {
       int mini=a[0];
       int maxPr=0;

       for(int i=0;i<a.size();i++){
        int cost=a[i]-mini;
        maxPr=max(maxPr,cost);
        mini=min(mini,a[i]);
       }

       return maxPr;
    }
 
int main()
{
    int n=7;
    vector<int>a={7,1,5,3,6,4,3};
    int ans=maxProfit(a,n);
    cout<<ans;
    return 0;
}