#include <bits/stdc++.h>
using namespace std;

 // Vector rules : 
 // 1. => when we are tryng to push more element than the defined size of vector then it will double the size of vector.
 // 2. => when we are trying to erase the element from the vector then it will not decrease the size of vector.
 // 3. => when we are trying to shrink the vector then it will decrease the size of vector. 
 // 4. => when we are trying to insert the element in the vector then it will increase the size of vector.


void explainvector(){
    vector<int> v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;        

    v.push_back(2);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

    v.push_back(3);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

    v.push_back(4);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

    v.push_back(5);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;

    v.push_back(6);
    cout<<v.capacity()<<endl;
        cout<<v.size()<<endl;


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

    vector<int> v2(5, 10);
    for(auto i : v2){
        cout<<i<<" ";   
    }
    cout<<endl; 
    //before insert : 10 10 10 10 10
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    //after insert : 5 10 10 10 10 10
    v2.insert(v2.begin(), 5);
    for(auto i : v2){
        cout<<i<<" ";
    }
    v2.shrink_to_fit(); 
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;  

    //inserting 3 elements of 55 at 2nd position
    v2.insert(v2.begin()+1,3,55);
    for(vector<int> :: iterator i = v2.begin(); i!=v2.end();i++){
        cout<<*i<<" ";  
    }

    //inserting elements from another vector in a vector
    vector<int> copy(2, 100);
    v2.insert(v2.begin(),copy.begin(),copy.end());
    for(auto i : v2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    v2.shrink_to_fit();
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    v2.clear();
    cout<<v2.size()<<endl;
    // cout<<v2.empty()<<endl;
    
    //swapping two vectors elements
    vector<int> v3 = {1,2};
    vector<int> v4 = {3,4};

    v3.swap(v4);
    for(auto i : v3){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : v4){
        cout<<i<<" ";
    }
    //swapping elements inside a vector
    cout<<endl;

    vector<int> v5 = {1,2,3,4,5};
    swap(v5[0],v5[4]);
    for(auto i : v5){
        cout<<i<<" ";
    }
    cout<<endl;

    //creating an itter swap for vector ellement
    vector<int> v6 = {1,2,3,4,5,6};
    vector<int> :: iterator it1 = v6.begin();
    // vector<int> :: iterator it2 = v6.end()-1;

    // for(int i = 0; i<v6.size(); i++){
        
    // }
    // for(int i=0; i<v6.size()-1; i = i+2){
    //     swap(v6[i],v6[i+1]);
    // }
    for(auto i = it1; i!=v6.end()-1; i++){
        swap(*i,*(i+1));
    

    }
    for(auto i : v6){
        cout<<"res"<<i<<" ";
    }  
    cout<<endl;
    //creating a pointer for vector element
    int arr[] = {1,2,3,4,5,6};

    int* ptr = new int[5]{1,2,3,4,5}; //allocating memory
    cout<<"done"<<endl;
    for(int i=0; i<5; i++){
        cout<<*(ptr+i)<<" ";
    };
    delete[] ptr; //deallocating the memory

    cout<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
    cout<<*(ptr+4)<<endl;
    cout<<*(ptr+5)<<endl;
    cout<<*(ptr+6)<<endl;

    cout<<INT_MAX<<endl;
    int w = INT_MAX;
    cout<<w<<endl;
    cout<<INT_MIN<<endl;
    int x = INT_MIN;
    cout<<++x<<endl;
    

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