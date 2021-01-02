/* Chef wants to host some Division-3 contests. Chef has N setters who are busy creating new problems for him. The ith setter has made Ai problems where 1≤i≤N.

A Division-3 contest should have exactly K problems. Chef wants to plan for the next D days using the problems that they have currently. But Chef cannot host more than one Division-3 contest in a day.

Given these constraints, can you help Chef find the maximum number of Division-3 contests that can be hosted in these D days?

Input:
The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers - N, K and D respectively.
The second line of each test case contains N space-separated integers A1,A2,…,AN respectively.
Output:
For each test case, print a single line containing one integer ― the maximum number of Division-3 contests Chef can host in these D days.

Constraints
1≤T≤103
1≤N≤102
1≤K≤109
1≤D≤109
1≤Ai≤107 for each valid i
Subtasks
Subtask #1 (40 points):

N=1
1≤A1≤105
Subtask #2 (60 points): Original constraints */

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int solve(long long arr[],long long N,long long K,long long D){
    long long sum = 0;
    for(int i=0;i<N;i++){
       sum += arr[i];
    }
    if(sum < K){
        return 0;
    }
    else{
    long long int count = sum/K;
    if(count > D){
        return D;
    }
    else{
       return count;
    }
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        long long N,K,D;
        cin>>N>>K>>D;
        long long arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,N,K,D)<<endl;  
            
    }

    return 0;
}