/* You are given a permutation a consisting of n numbers 1, 2, ..., n (a permutation is an array in which each element from 1 to n occurs exactly once).

You can perform the following operation: choose some subarray (contiguous subsegment) of a and rearrange the elements in it in any way you want. But this operation cannot be applied to the whole array.

For example, if a=[2,1,4,5,3] and we want to apply the operation to the subarray a[2,4] (the subarray containing all elements from the 2-nd to the 4-th), then after the operation, the array can become a=[2,5,1,4,3] or, for example, a=[2,1,5,4,3].

Your task is to calculate the minimum number of operations described above to sort the permutation a in ascending order.

Input
The first line contains a single integer t (1≤t≤2000) — the number of test cases.

The first line of the test case contains a single integer n (3≤n≤50) — the number of elements in the permutation.

The second line of the test case contains n distinct integers from 1 to n — the given permutation a.

Output
For each test case, output a single integer — the minimum number of operations described above to sort the array a in ascending order. */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t-- ) {
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        for(int &x : a) cin >> x;
        int ans = 2;
        if(is_sorted(a.begin(),a.end()))
          ans = 0;
        else if(a[0] == 1 || a[n - 1] == n)
        ans = 1;
        else if(a[0] == n and a[n -1 ] == 1)
        ans = 3;
        cout << ans <<endl;
    }
}

