#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
   int a,b,c,d,e;
   cin >> a >> b >> c >> d >> e;
   if(((a+b) <= d and (c <= e)) || ((b+c) <= d and (a <= e)) || ((c + a) <= d and (b <= e))){
       cout<< "YES" << endl;    
   }else{
       cout << "NO" << endl;
   }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}