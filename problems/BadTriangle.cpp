//good question
#include<bits/stdc++.h>

using namespace std;

int main(){
         int t;
	cin >> t;
 
	while (t--)
	{
		int n,i;
		cin >> n;
		int a[n];
		for (i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		bool x = false;
 
 
		for (i = 0; i < n - 2; i++)
		{
			if (a[i] + a[i + 1] <= a[n - 1])
			{
				cout << i + 1 << " " << i + 2 << " " << n << "\n";
				x = true;
				break;
			}
		}
		if (x == false)
		{
			cout << -1 << "\n";
		}
	}
	return 0;
}
 
 
