class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c = 0;
        string s = to_string(num);
        for(int i = 0; i <= s.size() - k; i++){
            string temp = s.substr(i, k);
            if(stoi(temp) != 0)
            if(num % stoi(temp) == 0){
                c += 1;
            }
        }
        return c;
    }
};