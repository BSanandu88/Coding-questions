#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long 
using namespace std;

void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll>v(n);
    map<ll,ll>mp1;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back(k);
        mp1[k]++;
    }
    int ans = 0,count = 0;
    for(ll i=0;i<v.size();i++){
        if((v[i] != v[i] ^ x) && ans < mp1[v[i]] + mp1[v[i] ^ x]){
            ans = mp1[v[i]] + mp1[v[i] ^ x];
            count = mp1[v[i] ^ x];
        }else if((v[i] != v[i] ^ x) && ans == mp1[v[i]] + mp1[v[i] ^ x] && count > mp1[v[i] ^ x]){
            ans = mp1[v[i]] + mp1[v[i] ^ x];
            count = mp1[v[i] ^ x];
        }else if(ans < mp1[v[i]]){
            ans = mp1[v[i]];
            count = 0;
        }
        
    }
    cout << ans << " " << count << endl;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
