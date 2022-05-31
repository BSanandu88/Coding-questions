class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size())  return false;
        unordered_set<string> se;
        for(int i = 0; i <= s.size() - k; i++){
            se.insert(s.substr(i, k));
        }
        return (se.size() == pow(2, k));
    }
};