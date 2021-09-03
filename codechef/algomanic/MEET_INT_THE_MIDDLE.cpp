#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
       int n,k;
       cin >> n>> k;
       vector<pair<int,int>> v(n);
       for(int x=0;x<n;x++){
           int i;cin>>i;
           v[x] = {i,x};
       }
       sort(all(v));
       vector<pair<int,int>> b(v.end() - k,v.end());
       cout << b[(k+1)/2 - 1].first << endl;
       sort(all(b),[](auto p,auto q){
           return p.second < q.second;
       });
       for(auto &i : b)cout << i.first << " ";
       cout << "\n";
    }
    return 0;
}