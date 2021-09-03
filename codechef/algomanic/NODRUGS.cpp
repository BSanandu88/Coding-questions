#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
 int n,k,l;
 cin >> n >> k >> l;
 vector<int>s(n);
 unordered_map<int,int>m;
 for(int i=0;i<n;i++){
     cin >> s[i];
     m[s[i]]++;
 }
 int res = s[n - 1];
 sort(s.begin(),s.end(),greater<>());
 if(s[0] == res and m[s[0]] == 1)
    cout << "Yes" ;
 else if(s[0] == res and m[s[0]] > 1){
     if( k > 0){
        if(l >= 1)
            cout << "Yes" ;
        else cout << "No" ;
        }else cout << "No" ;
 }else{
     int ans = s[0];
     int ans1 = ans - res;
     if(k > 0){
         int count = ans1 / k;
         count++;
         if(count < l) cout << "Yes";
         else cout << "No" ;
     }else{
         cout << "No";
     }
 }
 cout << endl;

}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}