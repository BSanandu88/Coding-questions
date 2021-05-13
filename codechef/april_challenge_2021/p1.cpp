#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
    int x,a,b;
    cin>>x>>a>>b;
    int sol = a + (100 - x) * b;
    cout<<sol*10<<endl;
}

signed main(){
      int t;
      cin>>t;
      while(t--){
          solve();
      }
      return 0;
}