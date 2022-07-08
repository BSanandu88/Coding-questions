class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> mp;
        int n = num.size();
        for(int i = 0; i < n; i++){
            int val = num[i] - '0';
            mp[val]++;
        }
        for(int i = 0; i < n; i++){
            int val = num[i] - '0';
            if(mp[i] != val) return false;
        }
        return true;
    }
};