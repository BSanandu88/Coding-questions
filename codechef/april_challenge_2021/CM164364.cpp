#include <iostream>
#include<set>
typedef long long int ll;
using namespace std;

void solve(){
    ll n,x;
    cin>>n>>x;
    set<ll>s;
    for(ll i=0;i<n;i++){
      ll t;
      cin>>t;
      s.insert(t);
    }
    ll ans = (ll)s.size();
    ans = min(ans,n-x);
    
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin>>t;
	while(t-- > 0){
	    solve();
	}
	return 0;
}
