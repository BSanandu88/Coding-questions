//program to move all x to the end of the string
#include<iostream>

using namespace std;

string moveallX(string s){
   //base case
   if(s.length() == 0){
       return "";
   }
   char ch = s[0];
   string ans = moveallX(s.substr(1));
   if(ch == 'x'){
       return ans+ch;
   }
   return ch + ans;

}
int main(){
    cout<<moveallX("axxbdxcefxhix");
    return 0;
}