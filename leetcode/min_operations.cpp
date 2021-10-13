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

// another method

vector<int> fun(string boxes){
    int n = boxes.length();
    vector<int> ans(n);
    vector<int> left(n),right(n);
    int count = boxes[0] - '0';
    for(int i=1;i<n;i++){
        left[i] = left[i-1] + count;
        count += boxes[i] - '0';
    }
    count = boxes[n-1] - '0';
    for(int i=n-2;i>=0;i--){
        right[i] = right[i+1] + count;
        count += boxes[i] - '0';
    }
    for(int i=0;i<n;i++){
        ans[i] = left[i] + right[i];
    }
    return ans;
}