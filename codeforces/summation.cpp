#include<iostream>
using namespace std;
#define ll long long 

int main(){
    ll n;
    cin>>n;
    ll a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<abs(sum)<<"\n";
    return 0;
}