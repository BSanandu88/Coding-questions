class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n = s.size();
        int found = 1;
        int ans = 0;
        while(found){
            found = 0;
            for(int i = 1; i < n; i++){
                if(s[i - 1] == '0' and s[i] == '1'){
                    swap(s[i], s[i - 1]);
                    i += 1;
                    found = 1;
                }
            }
            ans += found;
        }
        return ans;
    }
};