#include <bits/stdc++.h>   
using namespace std;

// STL divided  into 4 parts
// 1 algorithm
// 2 Containers
// 3 Function
// 4 Iterators


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
    vector<int> v;               //{}       Size of vector is not fixed as it is dynamic
    v.push_back(1);              //{1}
    v.emplace_back(2);           //{1,2}  similar to pushback()  and it is faster

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
    // vector<int>::iterator it=v.rend();
    // vector<int>::iterator it=v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    
    }


    // auto

    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    // erase

    v.erase(v.begin()+1);
    // {10,20,30,40,50,60}
    v.erase(v.behin()+2,v.begin()+4)   //{10,20,50,60}


    //insert function
    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin()+1,2,10);  //{300,10,10,100,100}


    // copy
    vector<int. copy(2,50);   //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());   //{50,50,300,10,10,100,100}

    // pop
    // {10,20}
    v.pop_back();   //{10}


    //v1 ->{10,20}
    //v2 ->{30,40}
    v1.swap(v2);  //v1-> {30,40}  v2->{10,20}

    v.clear();  //erase all

    cout<<v.empty();   //if empty then TRUE otherwise FALSE

    


int main(){
    pairs();
    vectors();

    return 0;
}
