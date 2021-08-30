//given a "2 x n" board and tiles of size "2 x 1",count the number of
//ways to tile the given board using these tiles
//similar to fibonacci series
#include<iostream>

using namespace std;

int tile(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return tile(n-1) + tile(n-2);
}

int main(){
    cout<<tile(4)<<endl;
    return 0;
}