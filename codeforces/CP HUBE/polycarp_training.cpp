#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>a(n);
   for (auto &x : a) cin >> x;
   sort(a.begin(),a.end());
   int ans = 1;
   for(auto i=0;i<n;i++){
       if(a[i] > ans)ans++;
   }
   cout<<ans-1<<endl;
}

int main(){
    solve();
    return 0;
}