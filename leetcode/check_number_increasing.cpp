#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<string> nums;
        string m = "";
        for(int i=0; i<s.length();i++){
            if(s[i] != ' '){
                m += s[i];
            }
            else if(s[i] == ' '){
                nums.push_back(m);
                m.erase();
                m = "";
            }
        }
        vector<int> ans;
        bool found = true;
        for(int i=0; i<nums.size();i++){
            string n = "";
            int number = 0;
            for(int j=0;j<nums[i].size();j++){
                if(nums[i][j] >= '0' and nums[i][j] <= '9'){
                     n += nums[i][j];
                }
            }
            int k = 0;
            if(n.size() > 0){
             while(k < n.size()){
                 number = number * 10 + (n[k] - '0');
                 k += 1;
             }
             ans.push_back(number);
            }
        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i] > ans[i+1]){
                found  = false;
            }else{
                break;
            }
        }
        if(found) return true;
        else return false;
    }
};

int main(){
    Solution s;
    bool ans = s.areNumbersAscending("sunset is at 7 51 pm overnight lows will be in the low 50 and 60 s");
    cout << ans << endl;
    return 0;
}