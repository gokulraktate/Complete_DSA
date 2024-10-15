// #include <bits/stdc++.h>
// using namespace std;

// //Optimal
// This is best Solution
 
//  int AppearOnce(vector <int> &a){
//     int xor1=0;
//     for(int i=0;i<a.size();i++){
//         xor1=xor1^a[i];
//     }
//     return xor1;
//  }

// int main()
// {
//     int n;
//     cout<<"size:"<<endl;
//     cin>>n;
//     cout<<"enter no all twice and one once;"<<endl;

//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int res=AppearOnce(a);
//     cout<<res;
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
 

//  //Better

//  int AppearOnce(vector<int>&a){
//     int n=a.size();
//     int maxi=a[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,a[i]);
//     }
//     int hash[maxi]={0};
//     for(int i=0;i<n;i++){
//         hash[a[i]]++;
//     }

//     for(int i=0;i<n;i++){
//         if(hash[a[i]]==1){
//             return a[i];
//         }
//     }
    
//  }
 
// int main()
// {
//     int n;
//     cout<<"size:"<<endl;
//     cin>>n;
//     cout<<"enter no all twice and one once;"<<endl;

//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int res=AppearOnce(a);
//     cout<<res;
//     return 0;
// }


//using map
#include <bits/stdc++.h>
using namespace std;
 

 //Better

 int AppearOnce(vector<int>&a){
    int n=a.size();
    map <long long ,int>mpp;

    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
 }
 
int main()
{
    int n;
    cout<<"size:"<<endl;
    cin>>n;
    cout<<"enter no all twice and one once;"<<endl;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int res=AppearOnce(a);
    cout<<res;
    return 0;
}