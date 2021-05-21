#include<iostream>
using namespace std;


int main(){
    int n,k; cin >> n >>k;
    int a[10000]; int c = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int j=1;j<=n;j++){
        if(a[j] >= a[k] && a[j] > 0){
            c++;
        }
    }
     cout<<c<<endl;
     return 0;
}