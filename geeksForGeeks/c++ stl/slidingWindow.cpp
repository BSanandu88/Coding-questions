/* Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.

Examples :
Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
Output: 3 3 4 5 5 5 6

Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4 
Output: 10 10 10 15 15 90 90 */

#include<deque>
#include<iostream>

using namespace std;

void printMax(int arr[],int n,int k){
    deque<int>dq(k);
    for(int i=0;i<k;i++){
        while(!(dq.empty()) && arr[i] >= arr[dq.back()])
           dq.pop_back();
        dq.push_back(i);
    }
    for(int i=0;i<n;i++){
        cout << arr[dq.front()]<<" ";
        while((!dq.empty()) && dq.front() <= i - k)
          dq.pop_front();
        while((!dq.empty()) && arr[i] >= arr[dq.back()])
          dq.pop_back();
        dq.push_back(i);
    }
    cout<<arr[dq.front()];
}

int main(){
    int arr[] = {1,2,3,1,4,5,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printMax(arr,n,k);
    return 0;
}