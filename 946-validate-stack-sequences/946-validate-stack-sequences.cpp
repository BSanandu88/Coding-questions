class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        for(auto x : pushed)
        {
            st.push(x);
            while(st.size() and st.top() == popped[i]){
                st.pop();
                i += 1;
            }
        }
        return (st.size() == 0);
    }
};