#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF INT_MAX
#define all(x) x.begin(),x.end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;  // test case input
    while(T--){
        int N; cin >> N;  // input N
        unordered_set<int>s;
        vector<ll>A(N);
        for(auto &x : A) { cin >> x;
         s.insert(x);}
        vector<ll>B(N-1);
        for(auto &x : B) cin >> x;
        sort(all(A));
        sort(all(B));
        int ans = B[0] - A[1];
        for(auto i : B){
            if(s.count(i - ans) == 0){
                ans = B[0] - A[0];
                break;
            }
        }
        if(ans <= 0)ans = B[0] - A[0];
        cout << ans << "\n";
    }
    return 0;
}