
/* Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string. */





#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin(), v.end() 
const ll mod=1000000007;
#define endl "\n"
#define ul unsigned long long
const int N = 6e5+10;

using namespace std;

/*void SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
*/
 
void solve(){
	int n;
	cin >> n;
	while(n--){
		string s,t;
		cin >> s >> t;
        string ans = ""; 
        int l1 = s.size();
        int l2 = t.size();
        if(l1 > l2){
        	int i;
        	for(i=0;i<l2;i++){
        		ans += s[i];
        		ans += t[i];
        	}
        	for(int j=i;j<l1;j++) ans += s[j];
        }
        else{
        	int i;
        	for(i=0;i<l1;i++){
        		ans += s[i];
        		ans += t[i];
        	}
        	for(int j=i;j<l2;j++) ans += t[j];
        }
        cout << ans << endl;
	}


}

int main(){
	FAST_INP;
	/* #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif */
	/*ll t;cin>>t;
	while(t--){
		solve();
	}*/
	solve();
	return 0;
}