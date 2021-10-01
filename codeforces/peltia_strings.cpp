#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin(), v.end() 
#define INF INT_MAX
#define MOD 1000000007
#define endl "\n"
#define ul unsigned long long
const int N = 6e5+10;

using namespace std;

int powk(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

 
void solve(){
    string x,y;
    cin >> x >> y;
    bool c = false;
    for(int i=0;i<x.length();i++){
        x[i] = tolower(x[i]);
        y[i] = tolower(y[i]);
    }
  
    if(x.compare(y) > 0){
    	cout << 1 << endl;
    }else if(x.compare(y) < 0){
    	cout << -1 << endl;
    }else{
    	cout << 0 << endl;
    }
    
}


int main(){
	FAST_INP;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	// ll t = 1;
	// cin >> t;
	// while(t--){
	// 	solve();
	// }
	solve();
	return 0;
}