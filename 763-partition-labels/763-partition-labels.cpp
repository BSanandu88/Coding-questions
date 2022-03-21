class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]] = i;
        }
        vector<int> res;
        int prev = -1;
        int maxval = 0;
        for(int i = 0; i < s.size(); i++){
            maxval = max(maxval, mp[s[i]]);
            if(maxval == i){
                res.emplace_back(maxval - prev);
                prev = maxval;
            }
        }
        return res;
    }
};