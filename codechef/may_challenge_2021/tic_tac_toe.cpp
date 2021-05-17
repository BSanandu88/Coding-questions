#include<iostream>
using namespace std;
#define int long long

void solve(){
      int x = 0,o = 0,v_ = 0;
      char arr[3][3];
      for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
              cin >> arr[i][j];
              if(arr[i][j] == 'X') x++;
              if(arr[i][j] == 'O')o++;
              if(arr[i][j] == '_')v_++;
          }
      }
      int winX = 0,winO = 0;
      if(arr[0][0] == 'X' and arr[1][0] == 'X' and arr[2][0] == 'X')winX = 1;
      if(arr[0][1] == 'X' and arr[1][1] == 'X' and arr[2][1] == 'X')winX = 1;
      if(arr[0][2] == 'X' and arr[1][2] == 'X' and arr[2][2] == 'X')winX = 1;
      if(arr[0][0] == 'X' and arr[1][1] == 'X' and arr[2][2] == 'X')winX = 1;
      if(arr[0][0] == 'X' and arr[0][1] == 'X' and arr[0][2] == 'X')winX = 1;
      if(arr[1][0] == 'X' and arr[1][1] == 'X' and arr[1][2] == 'X')winX = 1;
      if(arr[2][0] == 'X' and arr[2][1] == 'X' and arr[2][2] == 'X')winX = 1;
      if(arr[0][2] == 'X' and arr[1][1] == 'X' and arr[2][0] == 'X')winX = 1;

      if(arr[0][0] == 'O' and arr[1][0] == 'O' and arr[2][0] == 'O')winO = 1;
      if(arr[0][1] == 'O' and arr[1][1] == 'O' and arr[2][1] == 'O')winO = 1;
      if(arr[0][2] == 'O' and arr[1][2] == 'O' and arr[2][2] == 'O')winO = 1;
      if(arr[0][0] == 'O' and arr[1][1] == 'O' and arr[2][2] == 'O')winO = 1;
      if(arr[0][0] == 'O' and arr[0][1] == 'O' and arr[0][2] == 'O')winO = 1;
      if(arr[1][0] == 'O' and arr[1][1] == 'O' and arr[1][2] == 'O')winO = 1;
      if(arr[2][0] == 'O' and arr[2][1] == 'O' and arr[2][2] == 'O')winO = 1;
      if(arr[0][2] == 'O' and arr[1][1] == 'O' and arr[2][0] == 'O')winO = 1;


      if ((winX == 1 and winO == 1) or ((x-o) < 0) or (x-o) > 1){
          cout << 3 <<"\n";
      }else if(x == 0 and o ==0 and v_ == 9){
          cout<<2<<"\n";
      }else if(winX == 1 and winO == 0 and x > o){
           cout<<1<<"\n";
      }else if(winX == 0 and winO == 1 and x == o){
          cout<<1<<"\n";
      }else if(winX == 0 and winO == 0 and v_ == 0){
          cout <<1<<"\n";
      }else if(winX == 0 and winO == 0 and v_ > 0){
          cout<<2<<"\n";
      }else{
          cout << 3 <<"\n";
      }




}

signed main(){
    int t=1;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}