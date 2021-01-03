#include<bits/stdc++.h>
using ll  = long long int;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
       ll n,m,suma=0,sumb=0,correct=0;
       cin>>n>>m;
       priority_queue<ll,vector<ll>,greater<int>>a;
       priority_queue<ll>b;
       for(int i=0;i<n;i++){
           ll v;
           cin>>v;
           suma += v;
           a.push(v);
       }
       for(int i=0;i<m;i++){
           ll k;
           cin>>k;
           sumb += k;
           b.push(k);
       }
       if(suma > sumb){
           correct = 1;
           cout<<0<<endl;
       }
       else{
           for(int i=0; i<n ;i++){
               ll v = a.top();
               ll k = b.top();
               suma -= v;
               suma += k;
               sumb -= k;
               sumb += v;

               a.pop();
               b.pop();
               a.push(k);
               b.push(v);

               if(suma > sumb){
                   correct = 1;
                   cout<<i+1<<endl;
                   break;
               }
           }
           if(correct == 0){
               cout<<"-1"<<endl;
           }
           cout<<endl;
       }


    }
    return 0;
}