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
 
typedef pair<int,int> pii;

void solve(){
   int t;
   cin >> t;
   while(t--){
   	 int n;
   	 cin >> n;
   	 vector<int> a(n);
   	 vector<pii> actions;
   	 for(int i=0; i<n; i++)
   	 	cin >> a[i];
   	 for(int i=0; i<n-1; i++){
   	 	int min_pos = i;
   	 	for(int j=i+1; j<n; j++){
   	 		if(a[j] < a[min_pos]){
   	 			min_pos = j;
   	 		}
   	 	}
   	 	if(min_pos > i) {
   	 		actions.push_back({i,min_pos});
   	 		int opt = a[min_pos];
   	 		for(int j = min_pos; j>i; j--)
   	 			a[j] = a[j - 1];
   	 		a[i] = opt;
   	 	}
   	 }
   	 cout << actions.size() << endl;
   	 for(auto &k : actions){
   	 	cout << k.first + 1 << ' ' << k.second + 1 << ' ' << k.second - k.first << endl;
   	 }
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