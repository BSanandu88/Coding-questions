#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[150];
	cin>>str;
	for(int i = 0;i<strlen(str);i++ ){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}else{
			str[i] = tolower(str[i]);
		}
		cout<<str[i];
	}
	return 0;
}