/* You all must have seen a seven segment display.If not here it is:



Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

 

Input Format:

First line contains T (test cases).

Next T lines contain a Number N.

Output Format:

Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N */

#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ms = 0;
		for(int i=0;i<s.size();i++){
			if(s[i] == '1')ms+=2;
			else if(s[i] == '7')ms += 3;
			else if(s[i] == '4')ms += 4;
			else if(s[i] == '2' or s[i] == '3' or s[i] == '5')ms+=5;
			else if(s[i] == '0' or s[i] == '6' or s[i] == '9')ms+=6;
            else if(s[i] == '8')ms+=7;
		}
		//for largest number
		while(ms){
			if(ms%2!=0){
                cout<<'7';
                ms-=3;
            }
            else{
                cout<<'1';
                ms-=2;
            }
		}cout<<endl;
	}
	return 0;
}