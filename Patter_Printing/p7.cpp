/*

    *
   ***
  *****
 *******

*/

//logic
/*
this is the space star space logic
if n=5

5  1  5 
4  3  4
3  5  3
2  7  2
1  9  1


*/



#include <bits/stdc++.h>
using namespace std;

void pattern(){
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    
    {   //space
        for(int j=0;j<n-i-1;j++)
         
        {
           cout<<" "; 
        }
        //star
        for(int j=0;j<2*i+1;j++)
         
        {
           cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++)
         
        {
           cout<<" ";
        }
    
    cout<<endl;
        
    }
   
}

int main(){
    pattern();
}