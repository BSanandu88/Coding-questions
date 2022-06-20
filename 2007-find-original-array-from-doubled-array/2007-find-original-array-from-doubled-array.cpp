class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2) return {};
        unordered_map<int, int> m;
        for(auto &x : changed){
            m[x]++;
        }
        vector<int> nums;
        for(auto [n, count] : m){
            nums.push_back(n);
        }
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int n : nums){
            if(m[2 * n] < m[n]) return {};
            for(int i = 0; i < m[n]; i++, --m[2 * n]){
                ans.emplace_back(n);
            }
        }
        return ans;
    }
};