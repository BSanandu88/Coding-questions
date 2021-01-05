/*
In CPP we can't pass 2D arrays in normal way to a function. The array has to be declared in a special way.

Given a 2D array A[ ][ ] of size N x N consisting of integers. The task is to print all the elements in matrix (row and column order) form.

 

Input Format:
First line of input contains number of testcases T. For each testcase, first line contains N, size of row and columns of matrix (Number of rows = Number of columns). Next N line contains N integers in each line.

Output Format:
For each testcase, print the array elements in row-column order (Refer Sample Output for detail).

User Task: Your task is to complete the function twoDimensional() that takes two parameters: 2D array mat and N. You need to write the parameter for 2D array and print matrix.

Constraints:
1 <= T <= 10
1 <= N <= 100
1 <= A[i][j] <= 106

Example:
Input:
1
3
1 2 3
4 5 6
7 8 9

Output:
1 2 3
4 5 6
7 8 9 */
void twoDimensional(int** arr,int N){
    
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout << endl;
    }
    
}