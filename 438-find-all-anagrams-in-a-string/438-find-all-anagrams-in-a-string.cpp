class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> goal(26), curr(26), res;
       for(char c : p){
           goal[c - 'a']++;
       }
       for(int i = 0;i<s.size();i++){
           curr[s[i] - 'a']++;
           if(i >= p.size()){
               curr[s[i - p.size()] - 'a']--;
           }
           if(curr == goal){
               res.push_back(i - p.size() + 1);
           }
       }
        return res;
    }
};