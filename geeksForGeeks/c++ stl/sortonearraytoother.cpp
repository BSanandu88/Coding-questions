/* 

You are given two arrays a[] (integer) and b[] (char). The ith value of a[] corresponds to the ith value of b[]. Sort the array b[] with respect to a[].
 */


void sortArray(int a[], char b[], int n){
    
    pair<int, int> arr_p[n];
    for(int i = 0; i < n; i++)
    {
        arr_p[i].first = a[i];
        arr_p[i].second = b[i];
    }
    
    sort(arr_p, arr_p + n);
    
    for(int i = 0; i < n; i++)
    {
        b[i] = arr_p[i].second;
    }
    
    // Print the elements of pairs
    for(int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }

    
}