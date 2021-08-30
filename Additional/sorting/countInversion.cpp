//problem statement
//count the inversions in the given array
#include<iostream>

using namespace std;

long long merge(int arr[],int l,int mid,int r){
    long long inversion = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n1;i++){
        b[i] = arr[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;k++;
        }else{
            arr[k] = b[j];
            inversion += n1-i;
            //a[i],a[i+1],a[i+2] ... a[] > b[j] and i < j
            k++;j++;
        }   
    }
    while(i<n1){
        arr[k] = a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;j++;
    }
    return inversion;
}

long long mergeSort(int arr[],int l,int r){
   long long inversion = 0;
   if(l < r){
       int mid = (l+r)/2;
       inversion += mergeSort(arr,l,mid);
       inversion += mergeSort(arr,mid+1,r);
       inversion += merge(arr,l,mid,r);
   }
    return inversion;
}


int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}
