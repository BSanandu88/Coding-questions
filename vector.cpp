#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myCompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first < p2.first;
    }

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
    int arr[] = {10,16,7,14,5,3,2,9};
    vector<pair<int,int>>vp;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
       vp.push_back(make_pair(arr[i],i));

    }
    sort(vp.begin(),vp.end(),myCompare);

    for(int i=0;i<vp.size();i++){
        arr[vp[i].second] =i;

    }
    for(int i=0;i<vp.size();i++){
        cout<<arr[i]<<" ";

    }


    return 0;
}