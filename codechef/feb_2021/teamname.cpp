#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findans(string s[],int n){
    sort(s,s+n);
    string x,y;
    ll vl = 0;

    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            x = s[i];
            y = s[j];
            swap(x[0],y[0]);

            if(x[0]==y[0]){}
            else if(x==y){
            }
            else if(!binary_search(s,s+n,x) && !binary_search(s,s+n,y))vl+=2;

           }
    }
    return vl;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll testcase;
    cin>>testcase;

    while(testcase-- > 0){

        ll n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        ll ans = findans(s,n);
        cout<<ans<<endl;
    }
    
    return 0;
}