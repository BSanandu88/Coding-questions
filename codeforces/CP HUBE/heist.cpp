#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;cin >> n;
    vector<ll>a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    ll ans = 0;
    for(ll i=0 ;i < n-1 ;i++)
    {
        if(a[i+1] - a[i] > 1)
            ans += a[i+1]-a[i]-1;
    }
    cout<<ans<<"\n";
}

int main(){
    /* int t=1;
    cin >> t;
    while(t--){
        solve();
    } */
    solve();
    return 0;
}