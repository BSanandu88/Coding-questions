// good logic based question
class Solution {
public:
    bool squareIsWhite(string c) {
        vector<int> res = {1,2,3,4,5,6,7,8};
        int pos = res[c[0] - 'a'];
        string ans = to_string(pos) + c[1];
        if((ans[0] - '0')%2 != 0 and (ans[1] - '0')%2 == 0){
            return true;
        }else if((ans[0]-'0')%2 != 0 and (ans[1]-'0')%2 != 0){
            return false;
        }else if((ans[0]-'0')%2 == 0 and (ans[1]-'0')%2 != 0){
            return true;
        }else if((ans[0]-'0')%2 == 0 and (ans[1]-'0')%2 == 0){
            return false;
        }
        return true;
    }
};