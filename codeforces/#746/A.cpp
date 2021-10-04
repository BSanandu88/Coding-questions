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
 


int main(){
	FAST_INP;
	ll t=1;
	cin >> t;
	while(t--){
		ll n,h;
   cin >> n >> h;
   vector<ll> a(n);
   for(int i=0;i<n;i++)
   	  cin >> a[i];
   sort(all(a));
   int c = 0;
   c = h / (a[n - 1] + a[n - 2]);
   h -= (c * (a[n - 1] + a[n - 2]));
   if(c < 1){
   	  while(h > 0){
   	  	h -= a[n - 1];
   	  	c += 1;
   	  	if(h <= 0){
   	  		cout << c << "\n";
   	  		break;
   	  	}
   	  	h -= a[n - 2];
   	  	c += 1;
   	  	if(h <= 0){
   	  		cout << c << "\n";
   	  		break;
   	  	}
   	}
   	continue;
   }

   c = c * 2;
   if(h <= 0){
   	cout << c << "\n";
   	continue;
   }
   
   while(h > 0){
   	h -= a[n - 1];
   	c += 1;
   	if(h <= 0){
   		cout << c << endl;
   		break;
   	}
   	h -= a[n - 2];
   	c += 1;
   	if(h <= 0){
   		cout << c << endl;
   		break;
   	}
     }
	}
	//solve();
	return 0;
}

// second approach

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
   ll n,h;
   cin >> n >> h;
   int a[n];
   for(int i=0;i<n;i++)
   	  cin >> a[i];
   sort(a,a+n);
   ll x = a[n - 1];
   ll y = a[n - 2];
   if(h % (x + y) == 0){
   	ll ans = 0;
   	ans = 2 * (h/(x + y));
   	cout << ans << endl;
   }else if(h % (x + y) <= x){
   	ll ans = 0;
   	ans = 2 * floor(h/(x + y)) + 1;
   	cout << ans << endl;
   }else{
   	ll ans = 0;
   	ans = 2 * floor(h/(x + y)) + 2;
   	cout << ans << endl;
   }
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