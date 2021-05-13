#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,x,k;
    cin >> n >> x >>k ;
    if(x%k == 0 || (n+1-x)%k == 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}