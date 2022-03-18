class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        int lp[26] = {};
        bool add[26] = {};
        for(int i = 0; i < s.size(); i++){
            lp[s[i] - 'a'] = i;
        }
        for(int i = 0; i < s.size(); i++){
            if(add[s[i] - 'a']) continue;
            while(! ans.empty() and ans.back() > s[i] and lp[ans.back() - 'a'] > i){
                add[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            add[s[i] - 'a'] = true;
        }
        return ans;
    }
};