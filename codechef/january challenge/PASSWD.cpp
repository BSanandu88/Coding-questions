#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    bool len = false;
    bool s = false;
    bool l = false;
    bool d = false;
    bool alpha = false;
    int n = (int)s.size();

    if(n >= 10){
        len = true;
    }

    for(int i=0;i<n;i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s = true;
        if(i != 0 && i!= n-1){
            if(s[i] >= 'A' && s[i] <= 'Z') l = true;
            if(s[i] >= '0' && s[i] <= '9') d = true;
            if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?') alpha = true;

        }

    }
    if(len && l && s && d && alpha){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}