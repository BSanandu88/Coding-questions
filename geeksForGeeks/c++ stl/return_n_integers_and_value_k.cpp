
// C++ Program to return a List of integer
// with values less than K

#include<bits/stdc++.h>
using namespace std;

// Function to return a list of integers from 
// an array with values less than K
vector<int> fun(int arr[], int n, int k)
{   
    // Create a vector for the output list
    vector<int> V;
    
    // Traverse the array
    for(int i = 0; i < n; i++)
    {   
        // Store elements in the output list
        // whose value is less than K
        if (arr[i] < k) 
            V.push_back(arr[i]);
    }
    
    // return the output list
    return V;
}

// Driver Code
int main()
{
    // Input
    int arr[] = {17, 10, 20, 13, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    
    // Traverse and print elements of 
    // returned list
    for(auto x:fun(arr, n, k))
        cout<<x<<" ";
    
    return 0;
}
