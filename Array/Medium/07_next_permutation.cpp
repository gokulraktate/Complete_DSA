// #include <bits/stdc++.h>
// using namespace std;
 
// //  brute force
// // very high time complexity

// // better
// // using STL


// int main()
// {
//     int arr[] = {1,3,2};
    
//     next_permutation(arr,arr+3);//using in-built function of C++
    
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
//     return 0;
// }




// // optimal

#include <bits/stdc++.h>
using namespace std;
 
vector <int>  nextGreater(vector <int> &a,int n){
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(a.begin(),a.end());
        return a;
    }

    for(int i=n-1;i>ind;i--){
        if(a[i]>a[ind]){
            swap(a[i],a[ind]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;
 }
 
int main()
{
    int n=7;
    vector <int> a={3,1,5,4,2,0,0};
    nextGreater(a,n);
    return 0;
}