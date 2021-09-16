class Solution{
   public:
    int countNegatives(vector<vector>> &a){
        int ans = 0;
        int n = a.size();
        for(int i=0;i<n;i++){
            int low = 0,high = a[i].size();
            while(low < high){
                int mid = low + (high - low)/2;
                if(a[i][mid] < 0){
                    high = mid;
                }else{
                    low = mid + 1;
                }
            }
            ans += a[i].size() - low;
        }
        return ans;
    }
};