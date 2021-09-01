/* Given a number N and two arrays A, B of N numbers. Determine if B is a permutation of A or not.

Note: A permutation is an arrangement of all or part of a set of objects.

For example: The array [2, 1, 3], [3, 2, 1] and [2, 3, 1] are permutation of the array [1, 2, 3].

Input
First line contains a number N (1≤N≤103) Number of elements.

Second line contains N numbers (1≤Ai≤107) elements of array A.

Third line contains N numbers (1≤Bi≤107) elements of array B.

Output
Print "yes" if array B is a permutation of A otherwise, print "no" without quotations. */
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int n; cin >> n;
    vector<ll>A(n); for(auto &x : A) cin >> x;
    vector<ll>B(n); for(auto &x : B) cin >> x;
    bool f = true;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<n;i++){
        if(A[i] != B[i])f = false;
    }
    if(f)cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}