class Solution {
public:
    bool match(string a, string b){
        int s1 = a.size();
        int s2 = b.size();
        int i, j;
        for(i = 0, j = 0; i < s1 and j < s2; i++){
            if(a[i] == b[j]){j++;}
        }
        return j == s2;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int n = words.size();
        unordered_map<string, int> mp;
        int ans = 0;
        for(auto &x : words){
            if(mp.find(x) != mp.end()) ans += mp[x];
            else{
                mp[x] = match(s, x);
                ans += mp[x];
            }
        }
        return ans;
    }
};