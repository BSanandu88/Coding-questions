/* Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

Input
First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

Last line contains a number X (0 ≤ X ≤ 105) described above.

Output
Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number". */

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int n,m; cin >> n >> m;
    vector<vector<ll>>ans;
    for(int i=0;i<n;i++){
        vector<ll>v;
        for(int j=0;j<m;j++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ans.push_back(v);
    }
    int x; cin >> x;
    bool f  = false;
    for(auto i : ans){
        for(auto j : i){
            if(j == x){
                f = true;break;
            }
        }
    }
    if(f){
        cout << "will not take number" << endl;
    }else cout << "will take number" << endl;
    return 0;
}