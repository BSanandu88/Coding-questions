class Solution {
public:
    static bool cmp(pair<int,int> &a,pair<int,int> &b){
        if(a.first != b.first)return a.first < b.first;
        return a.second < b.second;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        vector<pair<int,int>> s;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j] == 1)count += 1;
                else break;
            }
            s.push_back({count,i});
        }
        sort(s.begin(),s.end(),cmp);
        for(int i=0;i<k;i++){
            res.emplace_back(s[i].second);
        }
        return res;
    }
};