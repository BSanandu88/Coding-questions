#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,k,ans,i,j;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n >> k;
        j = 1;
        while(k > 0){
            if((k % 2) == 1){
                ans = (ans + j) % mod;
            }
            j = (j * n) % mod;
            k /= 2;
        }
        cout << ans << endl;
    }

    return 0;
}

// another approach

int main(){
    int t; cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll p = 1;
        ll ans =  0;
        for(int j = 0; j<=31; j++){
            if(k & (i << j)){
                ans = (ans + p) % mod;
            }
            p *= n;
            p %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}