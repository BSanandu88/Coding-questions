#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n,s,k;
    cin >> n >> k >> s;
    vector<ll>a(n+k-1);
    for(int i=1;i<=n;i++){
        if(i%2 == 1)a.push_back(i);
    }
    s = s - (n * n);
    cout << s/(k-1)<<endl;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}