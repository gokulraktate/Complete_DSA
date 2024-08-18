#include <bits/stdc++.h>   
using namespace std;



//pairs

void pairs(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    // pair<int, pair< int,int >> p ={1,{2,3}};

    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};

    cout<<arr[1].second<<endl;

}

//vectors

void vectors(){
    vector<int> v;               //{}
    v.push_back(1);              //{1}
    v.emplace_back(2);           //{1,2}

    // v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);    //{100,100,100,100,100}
    vector<int> v(5);        //{0,0,0,0,0}
    vector<int> v1(5,20);    //{20,20,20,20,20}
    vector<int> v2(v1);      //{20,20,20,20,20}  copy
    

    vector<int>::iterator it=v.begin();

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    
    }


int main(){
    pairs();
    vectors();

    return 0;
}