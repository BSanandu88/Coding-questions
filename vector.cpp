#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //1 2 3
    vector<int>::iterator it;
    for(it=v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }
    for(auto element:v){
        cout<<element<<" ";
    }//1 2 3
    v.pop_back(); //1 2 
    vector<int>v2(3,100);
    // 100 100 100
    swap(v,v2);
    for(auto element:v){
        cout<<element<<" ";
    }
    for(auto element:v2){
        cout<<element<<" ";
    }
    sort(v.begin(),v.end());
    //--------------
    //pair
    pair<int,int> p;
    p.first = 100;
    p.second = 98;
    
    return 0;
}