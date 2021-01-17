#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //declaring iterator
    vector<int> :: iterator itr;

    for(itr = v.begin();itr != v.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}