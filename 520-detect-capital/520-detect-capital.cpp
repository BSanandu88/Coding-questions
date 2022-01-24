class Solution {
public:
    bool detectCapitalUse(string word) {
        string ans1 = "";
        string ans2 = "";
        string ans3 = "";
        ans3 += word[0];
        for(int i = 0; i < word.size(); i++){
            ans1 += tolower(word[i]);
            ans2 += toupper(word[i]);
        }
        for(int i = 1; i < word.size(); i++){
            ans3 += tolower(word[i]);
        }
        if(ans1 == word) return true;
        if(ans2 == word) return true;
        if(ans3 == word) return true;
        return false;
    }
};