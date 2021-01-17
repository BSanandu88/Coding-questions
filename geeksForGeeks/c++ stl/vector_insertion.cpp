G/* iven an array arr[] of size N containing integers.
 The task is to insert elements of given array to vector and return that vector. */





vector<int> fillVector(int arr[], int n)
{
    // your code here
    vector<int>v(arr,arr+n);
    return v;
}