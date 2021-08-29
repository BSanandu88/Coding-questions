#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>> b >> c;
        int minElement = min({a,b,c});
        if(minElement == a){
            cout << "Draw" <<endl;
        }else if(minElement == b){
            cout << "Bob" <<endl;
        }else if(minElement == c){
            cout<< "Alice" << endl;
        }
    }
    return 0;
}