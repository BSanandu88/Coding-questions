#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<char>cp(1000001,0);

void find(){
    int n = 1000000;
    vector<char>p(n+1,true);
    p[0] = p[1] = false;

    for(int i=2;i<=n;i++){
        cp[i] = cp[i-1];
        if(p[i] && (long long)i*i <= n){
            cp[i] += 1;
            for(int j=i*i;j<=n;j+=i){
                p[j] = false;
            }
        }
    }
}

/* void solve(){
       ll m,k;
       cin>>m>>k;
       if(cp[m] > k) cout<<"Divyam"<<endl;
       else {cout<<"Chef"<<endl;}

} */


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    find();
    ll t;
    cin>>t;
    while(t--){
        ll m,k;
       cin>>m>>k;
       if(cp[m] > k) cout<<"Divyam";
       else cout<<"Chef";
       cout<<endl;
    }
    return 0;
}