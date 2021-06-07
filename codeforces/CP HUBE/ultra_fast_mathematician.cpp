
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h> 
using namespace std; 
typedef long long LL; 
int INF=1000000005; 
long long INFF=1000000000000000005LL; 
#define TC(t) while (t--) 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(x) (x).begin(), (x).end()
typedef unsigned long long int ul;


void solve(){
	 string s1,s2;
     cin >> s1 >> s2;
     for(int i=0;i<s1.size();i++){
         if(s1[i] == s2[i])
         {
             s1[i] = '0';
         }else{
             s1[i] = '1';
         }
    }

    cout << s1 <<"\n";
}

int main(){
	FAST_INP;
	/* #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif */
	/*LL t;
	cin >> t;
	while(t--){
	  solve();
	}*/
	solve();
  
	return 0;
}