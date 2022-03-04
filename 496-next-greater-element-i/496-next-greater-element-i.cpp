class Solution {
public:
    int solve(vector<int> &nums2, int pos, int val){
        int ans = -1;
        for(int i = pos; i < nums2.size(); i++){
            if(nums2[i] > val){
                ans = nums2[i];
                break;
            }
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int pos = j;
                    int k = nums2[j];
                    int val = solve(nums2, pos, k);
                    res.push_back(val);
                }
            }
        }
        return res;
    }
};