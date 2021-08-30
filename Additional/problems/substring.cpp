//program to generate all substrings of a string
//using recursion
#include<iostream>

using namespace std;

void subsequence(string s,string ans){
    //base case
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string res = s.substr(1);
    subsequence(res,ans);
    subsequence(res,ans+ch);
}

int main(){

     subsequence("ABC","");
    return 0;
}