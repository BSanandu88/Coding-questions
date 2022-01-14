class Solution {
public:
    int minOperations(int n) {
        vector<int> v;
        for(int i=0; i < n; i++){
            v.push_back(2 * i + 1);
        }
        int sum = accumulate(v.begin(),v.end(),0);
        return sum/4;
    }
};