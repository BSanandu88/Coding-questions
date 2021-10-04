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
   string s;
   getline(cin,s);
   stack<char> st;
   for(int i=0; i<s.length(); i++){
   	if(s[i] != ' ')
   		st.push(s[i]);
    else{
   	while(st.empty() == false){
   		cout << st.top();
   		st.pop();
   	}
   	cout << " ";
   }
 }
 while(st.empty() == false){
 	cout << st.top();
 	st.pop();
 }
}


int main(){
	FAST_INP;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	// ll t=1;
	// cin >> t;
	// while(t--){
	// 	solve();
	// }
	solve();
	return 0;
}