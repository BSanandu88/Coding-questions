#include <iostream>
#include<bits/stdc++.h>
const int mod = 1000000007;
#define int long long
using namespace std;

string k = "EQUINOX";

void solve(){
    int n,a,b;
    int cntA = 0,cntB = 0;
    cin >> n >> a >> b;
    
    for(int i=0;i<n;i++){
        string s;cin>>s;
        int val = 0;
        for(int j=0;j<k.size();j++){
            if(k[j] == s[0]){
                val = 1;
            }
        }
        if(val)cntA += a;
        else cntB += b;
    }
    if(cntB == cntA) cout << "Draw\n";
    else if(cntA > cntB) cout << "Sarthak\n";
    else cout << "Anuradha\n"; 
}

signed main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
