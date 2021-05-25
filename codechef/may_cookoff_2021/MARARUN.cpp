#include<bits/stdc++.h>
# define pb push_back 
#define pii pair<int, int>
#define mp make_pair
# define ll long long int

using namespace std;
  
int main()
{   
    int t; cin >> t;
    int days, d, a, b, c;
    while(t--){
        cin >> days >> d >> a >> b >> c;        
        int ans = 0;
        if(days * d >= 42)ans = c;
        else if(days * d >= 21)ans = b;
        else if(days * d >= 10)ans = a;
        cout << ans << endl;            
    }
} 