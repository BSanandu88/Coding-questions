/* Given an array of elements of size N containing positive integers. The task is to make pair of elements given in array such that 1st element will be paired with last element, 2nd element with 2nd last, 3rd element with 3rd last and so on. If the array is of odd size then make middle element as a pair with itself.

Input Format: The input line contains T, denoting the number of testcases.For each testcase there will be two lines. The first line contains size of array N, second line contains elements of the array separated by space.

Output Format: For each testcase,in a new line, you need to print the pairs formed as such (arr[0],arr[N-1]) (arr[1],arr[N-2]), and so on in new line.

User task: Your task is to complete the function array_of_Pairs(arr, N) containing array and size of array as arguments.You don't have to worry about the input. Finally return the a vector of pairs formed. The printing is done by the driver code.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= arr[i] <= 1000

Sample Input:
2
5
1 2 3 4 5
4
4 2 3 1

Sample Output:
(1,5) (2,4) (3,3)
(4,1) (2,3) */


#include<iostream>
#include<utility>
#include<vector>
using namespace std;

//function
vector<pair<int, int>> array_pairs(int arr[], int N)
{
    vector<pair<int,int>>p;
    int start=0,end=N-1;
    
    while(start <= end){
        p.push_back({arr[start],arr[end]});
        start++;
        end--;
    }
    
    return p;
}



//driver code

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;

        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        vector<pair<int,int>> res = array_pairs(arr,N);

        for(int i=0;i<res.size();i++){
            cout<<"("<<res[i].first<<","<<res[i].second<<")";
        }
        cout<<endl;
    }
    return 0;
}