

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n;  
    vector<int>v;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    } 
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
