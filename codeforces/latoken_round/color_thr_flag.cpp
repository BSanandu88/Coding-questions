/* Today we will be playing a red and white colouring game (no, this is not the Russian Civil War; these are just the colours of the Canadian flag).

You are given an n×m grid of "R", "W", and "." characters. "R" is red, "W" is white and "." is blank. The neighbours of a cell are those that share an edge with it (those that only share a corner do not count).

Your job is to colour the blank cells red or white so that every red cell only has white neighbours (and no red ones) and every white cell only has red neighbours (and no white ones). You are not allowed to recolour already coloured cells.

Input
The first line contains t (1≤t≤100), the number of test cases.

In each test case, the first line will contain n (1≤n≤50) and m (1≤m≤50), the height and width of the grid respectively.

The next n lines will contain the grid. Each character of the grid is either 'R', 'W', or '.'.

Output
For each test case, output "YES" if there is a valid grid or "NO" if there is not.

If there is, output the grid on the next n lines. If there are multiple answers, print any.

In the output, the "YES"s and "NO"s are case-insensitive, meaning that outputs such as "yEs" and "nO" are valid. However, the grid is case-sensitive. */
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      for(int j=0;j<m;j++){
        if(s[j]=='.'){
          arr[i][j]=-1;
        }
        else if(s[j]=='R'){
          arr[i][j]=0;
        }
        else{
          arr[i][j]=1;
        }
      }
    }
    int ans1[n][m];
    for(int i=0;i<n;i++){
      bool f=0;
      if(i&1)f=1;
      for(int j=0;j<m;j++){
        if(!f)ans1[i][j]=0;
        else ans1[i][j]=1;
        f=!f;
        // cout<<ans1[i][j];
      }
      // cout<<endl;
    }
    int ans2[n][m];
    for(int i=0;i<n;i++){
      bool f=1;
      if(i&1)f=0;
      for(int j=0;j<m;j++){
        if(!f)ans2[i][j]=0;
        else ans2[i][j]=1;
        f=!f;
        // cout<<ans2[i][j];
      }
      // cout<<endl;
    }
    bool ans=1;
 
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]!=-1 and (arr[i][j]!=ans1[i][j])){
          // cout<<arr[i][j]<<" "<<ans1[i][j]<<endl;
          ans=0;
          break;
        }
      }
      if(!ans)break;
    }
    if(ans){
      cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(ans1[i][j]==0)cout<<'R';
        else cout<<'W';
      }
      cout<<endl;
    }
    }
    else{
      ans=1;
      for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]!=-1 and arr[i][j]!=ans2[i][j]){
          ans=0;
          break;
        }
      }
      if(!ans)break;
    }
    if(ans){
      cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(ans2[i][j]==0)cout<<'R';
        else cout<<'W';
      }
      cout<<endl;
    }
    }
    else{
      cout<<"No"<<endl;
    }
    }
 
    // cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}