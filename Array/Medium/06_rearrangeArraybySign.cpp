// #include <bits/stdc++.h>
// using namespace std;
 
// //  brute force
// // void Fun(vector<int> &a,int n){
// //     vector<int> pos;
// //     vector<int> neg;
// //     for(int i=0;i<n;i++){
// //         if(a[i]>=0){
// //             pos.push_back(a[i]);
// //         }
// //         else{
// //             neg.push_back(a[i]);
// //         }
// //     }

// //     for(int i=0;i<n/2;i++){
// //         a[2*i]=pos[i];
// //         a[2*i+1]=neg[i];
// //     }
// // }


// // Optimal

// // void Fun(vector<int> &a,int n){
// //     vector<int>ans;
// //     int pos=0;
// //     int neg=1;
// //     for(int i=0;i<n;i++){
// //         if(a[i]>=0){
// //             ans[pos]=a[i];
// //             pos+=2;
// //         }
// //         else{
// //             ans[neg]=a[i];
// //             neg+=2;
// //         }
// //     }
// //     for(int i=0;i<n;i++){
// //         cout<<ans[i]<<" ";
// //     }
// // }


 
// int main()
// {
//     int n=7;
//     vector<int> a={3,1,-2,-5,2,-4,7};
//     Fun(a,n);
//     return 0;
// }


// variety 2

#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // If positives are lesser than the negatives.
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
  }
  return A;
    
}

int main() {
    
  // Array Initialisation.
  int n = 6;
  vector<int> A {1,2,-4,-5,3,4};

  vector<int> ans = RearrangebySign(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}