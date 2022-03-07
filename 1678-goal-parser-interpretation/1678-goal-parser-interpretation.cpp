class Solution {
public:
    string interpret(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'G'){
                ans += s[i];
            }else if(s[i] == '(' and s[i + 1] == ')'){
                ans += "o";
            }else if(s[i] == 'a'){
                ans += "a";
            }else if(s[i] == 'l'){
                ans += "l";
            }
        }
        return ans;
    }
};