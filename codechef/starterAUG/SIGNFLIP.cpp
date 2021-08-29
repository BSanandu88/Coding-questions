#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(),a.end());
    for(int i=0;i<k;i++){
        if(a[i] < 0) a[i] = a[i] * (-1);
        else break;
    }
    ll reqVal = 0;
    for(int i=0;i<n;i++){
        if(a[i] > 0)reqVal += a[i];
    }
    cout<<reqVal<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      solve();
    }
    return 0;
}