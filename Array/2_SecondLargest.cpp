#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
          // Code Here
        int l=arr[0];
        int sl=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]>sl && arr[i]<l){
                sl=arr[i];
            }
        }
        return sl;
    }
};