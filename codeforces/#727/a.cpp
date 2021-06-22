#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n,x,t;
    cin >> n >> x >> t;
    ll result = min(n-1,t/x);
    if(result == 0){
    cout << 0 << endl;
    return;
    }
    ll ans = max(0ll,result*(result-1)/2)+result*(n - result);
    cout<<ans<<endl;
}
int main(){
    ll t1;
    cin >> t1;
    while(t1--){
        solve();
    }
    return 0;
}