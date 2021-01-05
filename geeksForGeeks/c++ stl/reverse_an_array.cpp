//Given an array A of size N, print the reverse of it.
// Recursive C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
	if (start >= end)
	return;
	
	int temp = arr[start]; 
	arr[start] = arr[end];
	arr[end] = temp;
	
	// Recursive Function calling
	reverseArray(arr, start + 1, end - 1); 
}	 


/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
} 

/* Driver function to test above functions */
int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    reverseArray(arr,0,n-1);
	    printArray(arr,n);
	}
	
	
	
	return 0;
}
