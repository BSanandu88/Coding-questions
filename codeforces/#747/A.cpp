// Theofanis has a riddle for you and if you manage to solve it, he will give you a Cypriot snack halloumi for free (Cypriot cheese).

// You are given an integer n. You need to find two integers l and r such that −1018≤l<r≤1018 and l+(l+1)+…+(r−1)+r=n.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases.

// The first and only line of each test case contains a single integer n (1≤n≤1018).

// Output
// For each test case, print the two integers l and r such that −1018≤l<r≤1018 and l+(l+1)+…+(r−1)+r=n.

// It can be proven that an answer always exists. If there are multiple answers, print any.

// Example
// inputCopy
// 7
// 1
// 2
// 3
// 6
// 100
// 25
// 3000000000000
// outputCopy
// 0 1
// -1 2 
// 1 2 
// 1 3 
// 18 22
// -2 7
// 999999999999 1000000000001

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

int setBitFind(int n){
	int count = 0;
	while(n > 0){
		count += 1;
		n = n >> 1;
	}
	return count;
}
 

void solve(){
   ll n;
   cin >> n;
   cout << -(n-1) << " " << n << endl;
}


int main(){
	FAST_INP;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
	//solve();
	return 0;
}