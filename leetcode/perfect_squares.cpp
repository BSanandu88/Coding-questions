/* Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

  */
 class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            int count = 1e4;
            for(int j=1;j*j<=i;j++){
                if((i - j*j) >= 0){
                    count = min(count,dp[i - j*j]);
                }
            }
            dp[i] = count + 1;
        }
        return dp[n];
    }
};