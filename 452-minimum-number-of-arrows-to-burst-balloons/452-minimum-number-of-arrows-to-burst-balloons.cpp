class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        sort(points.begin(),points.end());
        // int j = 0;
        // for(int i=0;i<points.size();i++)
        // {   for(j = 0;j<points[i].size();j++){
        //     cout << points[i][j] << " ";
        // }cout << endl;
        // } 
        int start = points[0][0];
        int end = points[0][1];
        int res = 1;
        for(auto point : points){
            if(point[0] <= end){
                start = max(start,point[0]);
                end = min(end,point[1]);
            }else{
                res += 1;
                start = point[0];
                end = point[1];
            }
        }
        return res;
    }
};