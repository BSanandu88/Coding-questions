/* Problem Statement
You are given a string S, which represents a weather forecast for the seven days starting tomorrow.
The i-th of those seven days is forecast to be sunny if the i-th character of S is o, and rainy if that character is x.

Tell us whether the N-th day is forecast to be sunny.

Constraints
N is an integer between 1 and 7 (inclusive).
S is a string of length 7 consisting of o and x. */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[n - 1] == 'o'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}