#include<bits/stdc++.h>
#define int long long
#define Y 100000007
using namespace std;



signed main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        sum = (sum + m + Y)%Y;
    }
    int num;
    cin>>num;
    while(num--){
        sum = (2*sum)%Y;
        cout<<sum<<'\n';
    }
    return 0;
}