#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,k,l;
        cin >> n >> k >> l;
        int friend_speed,fastest = 0;
        for(int x = 0; x<n-1;x++){
            int i;
            cin >> i;
            fastest = max(i,fastest);
        }
        cin >> friend_speed;
        if(k < 0){
            if(friend_speed > fastest) cout << "Yes" << endl;
            else cout << "No" << endl;
        }else{
            if(friend_speed + ( l - 1) * k > fastest)cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}