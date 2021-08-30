#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>b(n - 1);
    for(auto &x : a) cin >> x;
    for(auto &y : b) cin >> y;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    map<ll,ll>mp;
    for(ll i=0;i<n-1;i++){
        int val1 = b[i] - a[i];
        int val2 = b[i] - a[i + 1];
        if(val1 != val2){
            if(val1 > 0)mp[val1]++;
            if(val2 > 0)mp[val2]++;
        }else{
            if(val1 > 0)mp[val1]++;
        }
    }
    for(auto i : mp){
        if(i.second == n - 1){
            cout << i.first << endl;
            break;
        }
          
    }
    
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}