/*There is an N by M grid. A thief is trying to escape from a policeman. The thief is currently in cell (x,y) in the grid, while the policeman is in cell (a,b). Cells are numbered from 1 to N, top to bottom, and 1 to M, left to right. Both of them are at different cells initially.

Both of them take turns alternatively. First it is the thief's turn, then the police's, and so on. The thief needs to reach the cell (N,M) to escape. In his turn, the thief can move either right, or down, from his current cell. In other words, if his current cell is (i,j), then in one turn, he can either go to cell (i,j+1) or the cell (i+1,j). He can't stop, i.e., he needs to move during each of his turns. The policeman can move right, down, or (right + down) in one turn. In other words, in one turn, if his current cell is (i,j), then he can go to the cell (i,j+1), the cell (i+1,j) or the cell (i+1,j+1). It is not compulsory for the policeman to move every turn, i.e., he can choose to stay in his current cell in a particular turn of his. Neither of them are in cell (N,M) at the start.

The policeman catches the thief if he's in the same cell as the thief at any point of time, and he had reached that cell before the thief. If the thief reaches the cell (N,M) before the policeman, then he shall escape. Find if the thief shall escape, or the policeman shall catch him, if both of them move optimally, and if both of them have perfect knowledge of the other person's location at all times. Print YES if the thief shall escape, else print NO if the policeman shall catch him.

Input:
The first line contains an integer T, denoting the number of test cases.
The first line of each test case contains two space-separated integers N and M, denoting the number of rows and columns in the grid, respectively.
The second line of each test case contains two space-separated integers x and y, denoting the coordinates of the cell that the thief is in, initially.
The third line of each test case contains two space-separated integers a and b, denoting the coordinates of the cell that the policeman is in, initially.
Output:
For each test case print YES if the thief shall escape, else print NO, in a separate line.

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
3≤N,M≤105
1≤x,a≤N
1≤y,b≤M
Both of them are in different cells initially.
Neither of them are in cell (N,M) initially.
The thief needs to move during every turn of his. The policeman can choose not to move.
Sample Input:
3
3 3
2 3
3 1
3 3
2 3
3 2
5 4
1 2
4 2
Sample Output:
YES
YES
NO*/


#include <iostream>
using namespace std;


void solve(){
    int n,m,x,y,a,b;
    cin>>n>>m>>x>>y>>a>>b;
    int t1 = n-x + m-y;
    int t2 = max(n-a,m-b);
    if(t2 < t1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
