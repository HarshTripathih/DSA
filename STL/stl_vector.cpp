#include <bits/stdc++.h>
using namespace std;


void explainvector(){
    vector<int> v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(6);

    cout<<v.capacity()<<endl;

//before erase
    for(auto i: v){
        cout<<i<<" ";
    }

    vector<int> v1 = (v);

    v.erase(v.begin(), v.begin()+2);
//after erase

    cout<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.shrink_to_fit();
    cout<<v.capacity()<<endl; 

    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.data()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

}

int main(){
    explainvector();
};