#include <bits/stdc++.h>
using namespace std;
 
//  Armstrong Number

void armStrong(int x){
    int dup=x;
    int sum=0;
    int cntdigit;
    cout<<"enter the count of digit:";
    cin>>cntdigit;

    while(x>0){
        int a=x%10;
        sum=sum+pow(a,cntdigit);
        x=x/10;
    }

    if(dup==sum){
        cout<<"Armstrong Number.."<<endl;
    }
    else{
    cout<<"Not Armstrong Number..";
    }

}


int main()
{
    int x;
    cin>>x;
    armStrong(x);
    return 0;
}