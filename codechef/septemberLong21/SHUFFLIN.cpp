#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<ll>a(n);
    for(auto &x : a) cin >> x;
    int evenc=0,oddc=0;
    ll sum = 0;
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0)evenc++;
        else oddc++;
    }
    sum = min(evenc,n/2+n%2) + min(oddc,n/2);
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}