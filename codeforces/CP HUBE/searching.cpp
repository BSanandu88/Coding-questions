/* Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1. */
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin(), v.end() 
const ll mod=1000000007;
#define endl "\n"
#define ul unsigned long long

using namespace std;


void solve(){
	ll n;cin>>n;
	vector<ll>v(n);
	for(auto &x : v)cin>>x;
	ll k;cin>>k;
    ll pos = 0;ll flag = 0;
    for(int i=0;i<n;i++){
    	if(v[i]==k){
    		pos = i;
    		flag = 1;
    		break;
        }
    }
if(flag)cout<<pos<<endl;
else cout<<-1<<endl;

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