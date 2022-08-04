class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        cout << s.count(0);
        return s.size() - s.count(0);
    }
};