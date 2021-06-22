#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n,q;
    cin >> n>> q;
    string s;
    cin>>s;
    map<int,int>m[n+1],p[n+1];
    for(int i=1;i<=n;i++){
        for(auto it : m[i - 1])
           m[i][it.first] = it.second;
        m[i][s[i-1]-'a']++;
    }
    for(int i=n-1;i>=0;i--){
        for(auto it : p[i + 1])
          p[i][it.first] = it.second;
        p[i][s[i] - 'a'] = i;
    }
    for(int i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        map<int,int>mp;
        for(auto it : m[r]){
            mp[it.first] = it.second-m[l-1][it.first];
        }
        ll count = 0;
        for(auto it : mp){
            count += (it.second) * (it.first+1);
        }
        cout<<count<<endl;
    }
}
int main(){
    solve();
    return 0;
}