/* Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines of input, first of which contains N and next N line contains N elements.

Output:
For each testcase, output the column with maximum number of 0s.

Constraints:
1 <= T <= 100
1 <= N <= 102
0 <= A[i][j] <= 1

User Task:
Your task is to complete the function columnWithMaxZero() which should return the column number with maximum number of zeros. If more than one column exists, print the one which comes first.

Example:
Input:
1
3
1 1 0
1 1 0
1 1 0

Output:
2

Explanation:
Testcase 1: 2nd column (0-based indexing) is having 3 zeros which is maximum among all columns.
  */
 int columnWithMaxZeros(int N){
    int lastCnt = 0;
    int col = 0;
    for ( int i = 0 ; i < N; i++ ){
        int count = 0;
        for(int j = 0; j < N; j++){
            if(M[j][i] == 0){
                count++;
            }
        }
        if(lastCnt < count){
            lastCnt = count;
            col = i;
        }
        
    }
    
    return col;
    
}