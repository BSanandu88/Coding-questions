#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int max = 0;
	int count = 0;
	for(int i=1;i<=10;i++){
	    if(n%i  == 0){
	        count = i;
            if(count > max){
	        max = count;
	    }
	    }
	    
	}
	cout<<max<<endl;
	return 0;
}
