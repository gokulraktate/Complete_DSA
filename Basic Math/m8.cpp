#include <bits/stdc++.h>
using namespace std;

// Prime number
        // def= a  exactly having 2 factors

void prime(int n){
    int c=0;

    if (n <= 1) {
        cout << n << " is not a prime number.\n";
        return;
    }

    for(int i=2;i<n;i++){
         if(n%i==0){
            c++;
         }
    }
    if(c==2){
        cout<< n <<" is a Prime Number.."<<endl;
    }
    else{
        cout<< n <<" is not a Prime Number.."<<endl;
    }
}
 
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}