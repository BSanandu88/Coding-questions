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

/*void SieveOfEratosthenes(int n)
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
	string s;
	cin >> s;
	int m = s.size();
	string c = "hello";
	int n = c.size(); int j = 0;
	for(int i=0;i<m and j<n;i++){
         if(s[i] == c[j]) j++;
	}
    if(j == n) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main(){
	FAST_INP;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	/*ll t;cin>>t;
	while(t--){
		solve();
	}*/
	solve();
	return 0;
}