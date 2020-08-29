#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int T;
   cin >> T;
   while (T--) {
      int n, len;
      string s;
      cin >> n;
      cin >> s;
      len = s.length();
      for (int i = 0; i < len; i++)
         if (i % 2 == 0)
            cout << s[i];
      cout << endl;
   }
   return 0;
}