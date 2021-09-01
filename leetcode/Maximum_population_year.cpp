/* You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.

The population of some year x is the number of people alive during that year. The ith person is counted in year x's population if x is in the inclusive range [birthi, deathi - 1]. Note that the person is not counted in the year that they die.

Return the earliest year with the maximum population.

 

Example 1:

Input: logs = [[1993,1999],[2000,2010]]
Output: 1993
Explanation: The maximum population is 1, and 1993 is the earliest year with this population. */
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        // Line Sweep Algorithm
        vector<int>count(101,0);
        for(auto it : logs){
            count[it[0] - 1950]++;
            count[it[1] - 1950]--;
        }
        // prefix sum
        for(int i=1; i<101; i++){
            count[i] += count[i-1];
        }
        int maxLive = 0;
        int minYear = 0;
        for(int i=0; i<101; i++){
            if(maxLive < count[i]){
                maxLive = count[i];
                minYear = i;
            }
        }
        return minYear + 1950;
    }
};