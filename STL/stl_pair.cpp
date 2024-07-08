#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    // pair<int,pair<int,int>> p;
    // p = {1,{2,3}};

    vector<pair<pair<int,int>,pair<int,int>>> doublepair;
    doublepair.push_back({{1,2},{3,4}});
    doublepair.push_back({{5,6},{7,8}});
    doublepair.push_back({{9,10},{11,12}});
    doublepair.push_back({{13,14},{15,16}});
    doublepair.push_back({{17,18},{19,20}});
    doublepair.push_back({{21,22},{23,24}});
    doublepair.push_back({{21,22},{23,24}});

    for(pair<pair<int,int>,pair<int,int>> i: doublepair){
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second.first<<" "<<i.second.second<<endl;
    }


    vector<pair<int,pair<int,int>>> v;
    v.push_back({4,{1,2}});
    v.push_back({4,{3,4}});
    v.push_back({4,{5,6}});
    v.push_back({4,{7,8}});
    v.push_back({4,{9,10}});
    v.push_back({4,{11,12}});
    v.push_back({4,{13,14}});

    cout<<"Before shrink_to_fit() : "<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<"After shrink_to_fit() : "<<endl;
    v.shrink_to_fit();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    // vector<pair<int,int>>:: iterator it = v.begin(); 

    for(pair<int,pair<int,int>> i: v){
        cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    }
    

}

int main(){
    explainpair();
    return 0;
}