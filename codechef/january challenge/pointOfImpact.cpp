#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
     ll n,k,x,y;
     cin>>n>>k>>x>>y;
     if(x==y){
         cout<<n<<" "<<n<<endl;
     }else{
         vector<pair<ll,ll>>c;
         if(x > y){
             c.push_back({n,y+n-x});
             c.push_back({y+n-x,n});
             c.push_back({0,x-y});
             c.push_back({x-y,0});
         }else{
            c.push_back({x+n-y, n});
            c.push_back({n, n-y+x});
            c.push_back({y-x, 0});
            c.push_back({0, y-x});
         }
         --k;
         cout<<c[(k)%4].first<<" "<<c[(k)%4].second<<endl;
     }




}
int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     ll t;
     cin>>t;
     while(t-- > 0){
         solve();
     }
     return 0;
}