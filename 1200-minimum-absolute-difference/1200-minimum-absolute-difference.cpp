class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        // sort array 
        sort(arr.begin(),arr.end());
        // get min absolute diff
        int min_diff = INT_MAX;
        for(int i=1;i<n;i++)
            min_diff = min(min_diff,arr[i] - arr[i-1]);
        vector<vector<int>>res;
        // push consecutive items in to result if they have min absolute diff
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==min_diff)res.push_back({arr[i-1],arr[i]});
        } 
        return res;
    }
};