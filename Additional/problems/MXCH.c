/*
Chef Ada is the FootBall coach of the Dinosaurs Institute of Technology.

There are N dinosaurs (enumerated 1 through N) placed in a line. The i-th dinosaur has a height of i meters.

Ada is training The dinosaurs in the following tactic:

Initially the leftmost dinosaur has the ball.
The dinosaur that has the ball passes the ball to the nearest dinosaur to the right that is tallest than him.
The previous step continues until the ball reaches the tallest dinosaur, then he throws the ball and scores a goal!
Help Ada reordering the dinosaurs in such a way that the ball is passed from dinosaur to dinosaur exactly K times.

For example, if there are 5 dinosaurs ordered as [2,3,1,5,4], then the ball goes 2→3→5→goal, and the ball was passed two times.

Input:
First line will contain T, number of testcases.
Each test case consist of a line with two space separated integers N,K.
Output:
For each testcase, output in a single line conaining N integers representing one possible ordering in which the dinosaurs can be placed.

Constraints
1≤T≤28
2≤N≤20
0≤K≤N−1 */

#include <stdio.h>

int main(void) {
	int t,k,n,i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&k);
	    for(i=n-k;i<=n;i++)
	    printf("%d ",i);
	    for(i=1;i<n-k;i++)
	    printf("%d ",i);
	    printf("\n");
	}
	return 0;
}



