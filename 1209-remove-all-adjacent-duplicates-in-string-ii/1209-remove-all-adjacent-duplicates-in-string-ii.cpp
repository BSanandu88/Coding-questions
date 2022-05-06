class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push({s[i], 1});
            }
            else{
                if(st.top().first == s[i]){
                    st.top().second += 1;
                }else{
                    st.push({s[i], 1});
                }
            }
            if(!st.empty() and st.top().second == k){
                st.pop();
            }
        }
        string res = "";
        while(!st.empty()){
            res += string(st.top().second, st.top().first);
            st.pop();
        }
        reverse(begin(res), end(res));
        return res;
    }
};