#include <bits/stdc++.h>
using namespace std;
 
//  brute force
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    flag=1;
                }
            }
            if(flag==0){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }

// Optimal

vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
            }
            maxi=max(maxi,arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
 
int main()
{
    return 0;
}