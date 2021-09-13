
#include<bits/stdc++.h>
using namespace std;


void solve(){
   int n,a,b;
   cin >> n >> a >> b;
   string s;
   cin >> s;
   int total_time = 0;
   int district_count = 0;
   int state_count = 0;
   for(int i=0;i<n;i++){
       if(s[i] == '1')state_count++;
       if(s[i] == '0')district_count++;
   }
   total_time = a * district_count + b * state_count;
   cout << total_time << endl;
   
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}