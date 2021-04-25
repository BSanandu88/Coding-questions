/* A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F').

To pass the test, each candidate needs to either solve X or more problems completely, or solve (X−1) problems completely, and Y or more problems partially.

Given the above specifications as input, print a line containing N integers. The ith integer should be 1 if the ith candidate has passed the test, else it should be 0.

Input:
The first line of the input contains an integer T, denoting the number of test cases.
The first line of each test case contains two space-separated integers, N and M, denoting the number of candidates who appeared for the test, and the number of problems in the test, respectively.
The second line of each test case contains two space-separated integers, X and Y, as described above, respectively.
The next N lines contain M characters each. The jth character of the ith line denotes the result of the ith candidate in the jth problem. 'F' denotes that the problem was solved completely, 'P' denotes partial solve, and 'U' denotes that the problem was not solved by the candidate.
Output:
For each test case, print a single line containing N integers. The ith integer denotes the result of the ith candidate. 1 denotes that the candidate passed the test, while 0 denotes that he/she failed the test.

Constraints
1≤T≤100
1≤N≤100
2≤M≤100
1≤X,Y≤M
1≤(X−1)+Y≤M
Sample Input:
3
4 5
3 2
FUFFP
PFPFU
UPFFU
PPPFP
3 4
1 3
PUPP
UUUU
UFUU
1 3
2 2
PPP
Sample Output:
1100
101
0
Explanation:
Sample Test 1: There are 4 candidates and 5 problems. Each candidate needs to solve 3 or more problems completely, or 2 problems completely and 2 or more problems partially. Only the first and the second candidates satisfy this.

Sample Test 2: The candidates need to either solve at least one problem completely, or they need to solve three or more problems partially. Only candidates 1 and 3 satisfy this.

Sample Test 3: The candidate needs to either solve two or more problems completely, or solve at least one problems completely and two problems partially. The candidate does not satisfy this. */
#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,m;cin>>n>>m;
	    int x,y;cin>>x>>y;
	    
	    for(int i=0;i<n;i++){
	        int fullsolve = 0;
	        int partialsolve = 0;
	        
	        for(int j=0;j<m;j++){
	            char k;
	            cin>>k;
	            if(k=='F'){
	                fullsolve++;
	            }else if(k == 'P'){
	                partialsolve++;
	            }
	            
	        }
	            if((fullsolve >= x) || ((fullsolve >= x-1) && (partialsolve >= y))){
	                cout<<"1";
	            }else{
	                cout<<"0";
	            }
	        
	    
	        
	    }
	    cout<<"\n";
	}
	return 0;
}
