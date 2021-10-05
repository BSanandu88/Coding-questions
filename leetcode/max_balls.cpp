class Solution {
public:
    int countBalls(int lowlimit, int highlimit) {
        int n = highlimit - lowlimit + 1;
        unordered_map<int,int> mp;
        for(int i=lowlimit;i<=highlimit;i++){
                int sum = 0;
                int temp = i;
                while(temp > 0){
                int k = temp % 10;
                sum += k;
                temp = temp / 10;
                }
            mp[sum]++;
        }
        int count = INT_MIN;
        for(auto it : mp){
            count = max(count,it.second);
        }
        return count;
    }
};