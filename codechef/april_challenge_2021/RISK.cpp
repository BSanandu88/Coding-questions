#include<bits/stdc++.h>
#define MAX 9223372036854775807
#define endl "\n"
#define ll long long
#define int long long
// #define double long double
#define pb push_back
#define pf pop_front
#define mp make_pair
#define ip pair<int, int>
#define F first
#define S second

#define loop(i,n) for(int i=0;i<n;i++)
#define loops(i,s,n) for(int i=s;i<=n;i++)
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_updat
// using namespace __gnu_pbds;
// typedef tree<ip, null_type, less_equal<ip>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).

const ll MOD = 1e9+7;
const ll SZ = 107;
const ll N = 1e6+7;
const ll M = 1e4+7;

int n, m, c; 

void dfs(int x, int y, vector<string> &g, vector<vector<bool>> &vis){
    if(x < 0 or x >= n or y < 0 or y >= m or vis[x][y] or g[x][y] == '0')
        return;
    vis[x][y] = 1;
    c++;
    dfs(x-1, y, g, vis);
    dfs(x+1, y, g, vis);
    dfs(x, y-1, g, vis);
    dfs(x, y+1, g, vis);
}

void solve(){
    cin>>n>>m;
    vector<string> g(n);
    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    loop(i, n) cin >> g[i];
    vector<int> comps;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                c = 0;
                dfs(i, j, g, vis);
                comps.pb(c);
            }
        }
    }
    sort(comps.begin(), comps.end());
    reverse(comps.begin(), comps.end());
    int ans = 0;
    for(int i=1;i<comps.size(); i+=2)
        ans += comps[i];
    cout << ans << '\n';
}

signed main()
{
    // fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    
    int t=1;
    cin >>t;
    for(int i=1;i<=t;i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
