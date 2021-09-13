// https://codeforces.com/contest/1566/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin(), v.end() 
const ll mod=1000000007;
#define endl "\n"
#define ul unsigned long long
const int N = 6e5+10;

using namespace std;

/* void SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    { 
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 */
 
void solve(){
	int n,s;
	cin >> n >> s;
	int m = n/2 + 1;
	cout << s/m << endl;
}

int main(){
	FAST_INP;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	ll t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	//solve();
	return 0;
}