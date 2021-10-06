#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<long long int > v(n + 1);
    v[0] = 0;
    for(int i=1; i<(n + 1); i++){
        v[i] = v[i - 1] + ((s[i - 1] - 'a') + 1);
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}