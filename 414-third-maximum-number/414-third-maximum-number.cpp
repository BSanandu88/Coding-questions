class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() <= 2){
            return *max_element(nums.begin(),nums.end());
        }
        set<int> st(nums.begin(),nums.end());
        vector<int> v(st.begin(),st.end());
        sort(v.begin(),v.end());
        if(v.size() <= 2){
            return *max_element(v.begin(),v.end());
        }
        return v[v.size() - 3];
    }
};