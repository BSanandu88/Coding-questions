#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin(), v.end() 
const ll mod=1000000007;
#define endl "\n"
#define ul unsigned long long

using namespace std;

/* vector<int> v;
void findval(){
	for(int i=0;i<2000;i++){
		if(i%3 == 0 or i%10 == 3)continue;
		v.push_back(i);
	}
}

void solve1(){
 // unused
} */

void solve(){
	int n,m;
	cin >> n >> m;
	vector<vector<long long int>> v;
	for(int i=0;i<n;i++){
		vector<long long int> a;
		for(int j=0;j<m;j++){
			int x;
			cin >> x;
			a.push_back(x);
		}
        reverse(a.begin(),a.end());
        v.push_back(a);
	}
	for(auto i : v){
		for(auto j : i){
			cout << j << " ";
		}
		cout << endl;
	}
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