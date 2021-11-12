class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> a;
        
        string t = "";
        for (int i=0; i < s.size(); i++) {
            if (s[i] != ' ') {
                t += s[i];
            }
            else if (t != "") {
                a.push_back(t);
                t = "";

            }
        }
        if (t != "") {
            a.push_back(t);
            t = "";
        }
        
        int n = 0;
        
        for (string x: a) {
            int siz = x.size();
            n = max(n, siz);
        }
        
        vector<string> ans(n, "");
       
        for (int i=0; i < n; i++) {
            for (int j=0; j < a.size(); j++) {
                if (i >= a[j].size()) ans[i] += ' ';
                else ans[i] += a[j][i];
            }
            while (ans[i].back() == ' ') ans[i].pop_back();
            
        }
        
  
        return ans;
    }
};