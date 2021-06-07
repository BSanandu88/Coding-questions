#include<iostream>
using namespace std;

bool correct(char s){
    if(s=='a'||s=='e'||s=='o'||s=='i'||s=='u'||s=='y')
       return true;
    return false;
}
int main(){
    int n;cin>>n;
    string s;cin>>s;
    cout<<s[0];
    for(int i=1;i<n;i++){
        if(correct(s[i]) == false){
            cout<<s[i];
        }else{
            if(correct(s[i-1]) == false){
                cout<<s[i];
            }
        }
    }
    
    
    cout<<endl;
    return 0;
}