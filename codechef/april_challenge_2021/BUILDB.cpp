/* After solving programming problems for years, Chef has become lazy and decided to get a better physique by doing some weight lifting exercises.

On any regular day, Chef does N exercises at times A1,A2,…,AN (in minutes, all distinct) and each exercise provides a tension of B1,B2,…,BN units. In the period between two consecutive exercises, his muscles relax R units of tension per minute.

More formally, Chef's tension is described by a number x. Before any workouts, x=0. When he does a workout at time Ai, the tension x instantly increases by Bi. Between workouts, the number x decreases by R units per minute, maximized with 0.

Considering the time of exercise and hence tension to be negligible, find the maximum tension he will be feeling in his muscles during the entire period of his workout.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains 3 lines of input.
The first line will contain 2 space-separated integers N,R, number of timestamps at which Chef performs his exercise, and units of tension relaxed per minute.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains N space-separated integers B1,B2,…,BN.
Output:
For each testcase, output in a single line the maximum amount of tension Chef will have in his muscles.

Constraints
1≤T≤10
1≤N≤5⋅104
1≤R,Bi≤105
1≤Ai≤109
Ai−1<Ai, for all 2≤i≤N
Sample Input:
3
1 2
10
10
2 2
10 11
10 10
3 1
1 2 3
1 2 3
Sample Output:
10
18
4 */
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,r;cin>>n>>r;
    ll A[n],B[n];
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }
    for(ll i=0;i<n;i++){
        cin>>B[i];
    }
    
    ll ans = B[0];
    ll maxAns = B[0];
    for(ll i=1;i<n;i++){
        ll k = A[i] - A[i-1];
        ans=max(0ll,ans-k*r);
		ans+=B[i];
		maxAns=max(maxAns,ans);
    }
    cout<<maxAns<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
