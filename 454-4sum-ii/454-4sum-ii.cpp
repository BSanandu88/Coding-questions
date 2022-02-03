class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int res = 0;
        map<int,int> mp;
        for(int k : nums4){
            for(int l : nums3){
                mp[k + l]++;
            }
        }
        for(int i : nums1){
            for(int j : nums2){
                res += mp[-(i + j)];
            }
        }
        return res;
    }
};