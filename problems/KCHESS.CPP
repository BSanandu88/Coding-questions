#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;cin>>T;
	while(T--){
	int N;cin>>N;
	int x[N],y[N];
	for(int i=0;i<N;i++)
		cin>>x[i]>>y[i];
	int a,b;
	cin>>a>>b;
	bool ans=true;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(i==0 && j==0)
				continue;
			int A=a+i,B=b+j;
			bool check=false;
			for(int i=0;i<N;i++)
				if((abs(A-x[i])==2 && abs(B-y[i])==1) || (abs(A-x[i])==1 && abs(B-y[i])==2 ))
                  {
                  	check=true;
                  	break;
                  }
                  if(check==false)
                  	ans=false;

		}
	}
	if(ans)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
}