#include<bits/stdc++.h>
using namespace std;
typedef long long                                        ll;
typedef long double                                      ld;
typedef pair <int, int>                                  pii;
typedef pair <pii, int>                                  ppi;
typedef pair <int, pii>                                  pip;
typedef pair <pii, pii>                                  ppp;
typedef pair <ll, ll>                                    pll;



int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int min_val = INT_MAX;
        int a[n];
        int ans = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            min_val = min(a[i],min_val);
        }
        for(int i=1;i<=n;i++){
            ans += a[i] != min_val;
        }
        cout<<ans<<endl;
    }
    return 0;
}