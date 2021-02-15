#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ll t;
    cin >> t;
    string k;
    getline(cin , k);
    while(t--)
    {
        string T;
        getline(cin , T);
        string c;
        if(T[6] == 'A')
        {
            //deb(L[6]);
            if(T[0] == '1' && T[1] == '2')
                c = "00" + T.substr(2 , 3);
            else
            {
                c = T.substr(0 , 5);
            }
        }
        else
        {
            if(T[0] == '1' && T[1] == '2')
            {
                c = T.substr(0 , 5);
            }
            else
            {
                int val = stoi(T.substr(0 , 2));
                val += 12;
                
                c = to_string(val) + T.substr(2 , 3);
            }
            
        }
        ll n;
        cin >> n;
        string ans;
        getline(cin , k);
        while(n--)
        {
            string O;
            getline(cin , O);
            string start , finish;
           
            if(O[6] == 'A')
            {
                
                if(O[0] == '1' && O[1] == '2')
                    start = "00" + O.substr(2 , 3);
                else
                {
                    start = O.substr(0 , 5);
                }
            }
            else
            {
                if(O[0] == '1' && O[1] == '2')
                {
                    start = O.substr(0 , 5);
                }
                else
                {
                    int val = stoi(O.substr(0 , 2));
                    val += 12;
                    
                    start = to_string(val) + O.substr(2 , 3);
                }
                
            }
            if(O[15] == 'A')
            {
                
                if(O[9] == '1' && O[10] == '2')
                    finish = "00" + O.substr(11 , 3);
                else
                {
                    finish = O.substr(9 , 5);
                }
            }
            else
            {
                
                if(O[9] == '1' && O[10] == '2')
                {
                    finish = O.substr(9 , 5);
                }
                else
                {
                    int val = stoi(O.substr(9 , 2));
                    val += 12;
                   
                    finish = to_string(val) + O.substr(11 , 3);
                }
            }
            
            if(c >= start && c <= finish)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout << ans << endl;
    }
    
 } 