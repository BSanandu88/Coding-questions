class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        vector<string> word;
        string res = "";
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                res += s[i];
            }else if(s[i] == ' '){
                word.push_back(res);
                res = "";
            }
        }
        word.push_back(res);
        if(pattern.length() != word.size()) return 0;
        for(int i = 0; i < word.size(); i++){
            if(mp1[pattern[i]] == ""){
                for(auto &j : mp1){
                    if(j.second == word[i]) return 0;
                }
                mp1[pattern[i]] = word[i];
            }else if(mp1[pattern[i]] != word[i]) return 0;
        }
        return 1;
    }
};