// #include <bits/stdc++.h>
// using namespace std;
 
// //  no of digits
// int main()
// {
//     int n,c=0;
//     cin>>n;
//     while(n>0){
//         c++;
//         n=n/10;

//     }
//     cout<<c;
//     return 0;
// }


// or

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    int c=log10(n)+1;
    cout<<c;

    return 0;
}