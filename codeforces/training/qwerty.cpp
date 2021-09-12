/* https://atcoder.jp/contests/abc218/tasks/abc218_b */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[30];
    for(int i=1;i<=26;i++){
        cin >> arr[i];
    }
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    for(int i=1;i<=26;i++){
        ans.push_back(alpha[arr[i] - 1]);
    }
    cout << ans << "\n";
  return 0;
}
