class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<string> spare = nums;
        for(auto &x : queries){
            int k = x[0], trim = x[1];
            priority_queue<pair<string, int>> pq;
            for(int i = 0; i < nums.size(); i++){
                string &s = nums[i];
                pq.push({s.substr(s.size() - trim), i});
                if(pq.size() > k) pq.pop();
            }
            nums = spare;
            ans.emplace_back(pq.top().second);
        }
        return ans;
    }
};