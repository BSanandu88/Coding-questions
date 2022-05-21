class Solution {
public:
    int minimumCardPickup(vector<int>& ans) {
        int n = ans.size();
        int res = INT_MAX;
        vector<pair<int, int> > v;
        for(int i = 0; i < n; i++){
            v.push_back(make_pair(ans[i], i));
        }
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); i++){
            int pf = v[i - 1].first;
            int ps = v[i - 1].second;
            int cf = v[i].first;
            int cs = v[i].second;
            if(pf == cf){
                res = min(res, abs(cs - ps));
            }
        }
        return (res == INT_MAX ? -1 : res + 1);
    }
};