#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<int>a(3);
    for(auto &x : a) cin >> x;
    vector<int>b(3);
    for(auto &x : b) cin >> x;
    int count0 = 0,count1 = 0,cb0=0,cb1=0;
    for(int i=0;i<3;i++){
        if(a[i] == 0)count0++;
        if(a[i] == 1)count1++;
        if(b[i] == 0)cb0++;
        if(b[i] == 1)cb1++;
    }
    if(count0 == cb0 and cb1 == count1){
        cout << "Pass" << endl;
    }else {
        cout << "Fail" << endl;
    }
}

int main(){
   int t; cin >> t;
   while(t--){
       solve();
   }
    return 0;
}