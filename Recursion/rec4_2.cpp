#include <bits/stdc++.h>
using namespace std;
 
//  check if string is a palindrome
bool f(int i, string &s){
    if(i>=s.size()/2)  return true;
    if(s[i]!=s[s.size()-i-1])  return false;

    return f(i+1,s);

}
 
int main()
{
    // string s="madam";    true 1
    // string s="madsm";       false 0

    string s="madam"; 
    cout<<f(0,s);
    return 0;
}