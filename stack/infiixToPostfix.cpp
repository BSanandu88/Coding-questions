#include<iostream>
#include<stack>
using namespace std;

int prec(char c){  
    if(c == '^') return 3;
    else if(c == '*' || c == '/')return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPos(string s){
    stack<char>st;
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            res.push_back(s[i]);
        }else if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res.push_back(st.top());
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty() && prec(st.top()) > prec(s[i])){
                res.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
        while(!st.empty()){
            res.push_back(st.top());
            st.top();
        }
        return res;  
}

int main(){
    cout<<infixToPos("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}