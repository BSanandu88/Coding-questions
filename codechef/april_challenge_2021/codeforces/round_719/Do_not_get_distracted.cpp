#include<iostream>
#include<bits/stdc++.h>
/*using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;*/
using namespace std;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(char c = 'A';c <= 'Z';c++){

		int first = n;
		int last = -1;
		for(int i=0;i < n;i++){
			if(s[i] == c){
				first = min(first,i);
				last = max(last,i);
			}
		}

		for(int i = first; i <= last; i++){
			if(s[i] != c){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
}

int main(){

	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
  	solve();
  }
	return 0;
}