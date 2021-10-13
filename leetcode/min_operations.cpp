class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n);
        vector<int> pos;
        for(int i=0; i<n; i++){
            if(boxes[i] == '1'){
                pos.emplace_back(i);
            }
        }
        for(int i=0; i<n; i++){
            for(auto num : pos){
                ans[i] += abs(num - i);
            }
        }
        return ans;
    }
};