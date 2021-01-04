#include<bits/stdc++.h>

using namespace std;

void reverse(string s){
    if(s.length() == 0){ //base case
        return;
    }
    string restString = s.substr(1);
    reverse(restString);
    cout<<s[0];
}

int main(){
     reverse("coding is life");
    return 0;
}