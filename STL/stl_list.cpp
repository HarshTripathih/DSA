#include<bits/stdc++.h>
using namespace std;


void explainList(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.emplace_back(8);
    l.emplace_front(9);
    l.push_front(10);
    // l.pop_back();
    // l.pop_front();
    // l.remove(3);
    // l.reverse();
    l.sort();

    for(int i=0;i<=8;i++){
        // l.push_back(i);
       l.pop_back(); 
    }
    

    for(int i: l){
        cout<<i<<" ";
    }
    };


int main(){
    explainList();
    return 0;
}
