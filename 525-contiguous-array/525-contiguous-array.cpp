class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(2*n+1,INT_MIN);
        arr[n] = -1;
        int maxlen = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += (nums[i] == 0 ? -1 : 1);
            if(arr[sum + n] >= -1){
                maxlen = max(maxlen,i - arr[sum + n]);
            }else{
                arr[sum + n] = i;
            }
        }
        return maxlen;
    }
};