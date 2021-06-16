/* Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index). */
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int mini = INT_MAX;
    int pos = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] < mini){
            mini = a[i];
            pos = i;
        }
    }
    cout<<mini<<" "<<pos+1<<endl;
    return 0;
}