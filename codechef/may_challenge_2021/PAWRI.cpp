#include<iostream>
#pragma GCC optimize("Ofast")
/* #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope> */
/* using namespace __gnu_pbds;
using namespace __gnu_cxx; */
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(i+4 < s.size() and s.substr(i,5) == "party"){
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
                i+=4;
            }
        }
      cout << s << endl;
    }
    
    return 0;
}