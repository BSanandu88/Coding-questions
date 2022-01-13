class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        for(int i=0; i < ops.size(); i++){
            if(ops[i] == "+"){
                res.emplace_back(res[res.size() - 1] + res[res.size() - 2]);
            }else if(ops[i] == "C"){
                res.pop_back();
            }else if(ops[i] == "D"){
                res.emplace_back(2 * res[res.size() - 1]);
            }else{
                res.emplace_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        sum = accumulate(res.begin(),res.end(),0);
        return sum;
    }
};