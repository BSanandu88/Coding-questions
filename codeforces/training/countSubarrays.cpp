/* A sub-array of array is an array composed from a contiguous block of the original array's elements.

In other words A sub-array A[i-j], where (1 ≤ i ≤ j ≤ N), is a sequence of integers Ai, Ai + 1, ..., Aj.

For Example :

IF array = [1,6,3,7] then the subarrays are [1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7] .

Something like [1,3] would not be a sub-array as it's not a contiguous subsection of the original array.

Given a number N and an array A of N numbers. Print the number of sub-arrays which are non-decreasing.

Note:

A sub-array A[i-j] is non-decreasing if (Ai  ≤  Ai + 1  ≤  Ai + 2  ≤  ...  ≤  Aj).
Input
First line contains a number T (1 ≤ T ≤ 5) number of test cases.

Each test case contains two lines:

First line contains a number N (1 ≤ N ≤ 102) number of elements.
Second line contains N numbers ( - 105 ≤ Ai ≤ 105)
Output
For each test case print a single line contains the number of sub-arrays which are non-decreasing..

Example
inputCopy
2
5
1 4 2 3 5
1
5
outputCopy
9
1
Note
First example:

All valid sub-arrays are :

- [1] , [1,4] , [4] , [2] , [3] , [5] , [2,3] , [3,5] , [2,3,5]

Second example:

Only single sub-array [5] is non-decreasing.

Note that singleton sub-arrays ( have only one element) are identically non-decreasing. */
#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n; cin >> n;
      vector<int>a(n);
      for(auto &x : a) cin >> x;
      ll c = 0;
      ll len = 0;
      for(int i=0;i<n;i++){
          c++;
          if( i != n-1 and a[i] > a[i+1]){
              len += (c*(c+1))/2;
              c = 0;
          }
      }
      len += (c*(c+1))/2;
      cout << len << endl;
    }
    return 0;
}