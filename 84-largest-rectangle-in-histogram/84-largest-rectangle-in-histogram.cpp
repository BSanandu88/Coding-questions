class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int ans = 0;
        heights.emplace_back(0);
        for(int i = 0; i < heights.size(); i++){
            while(!st.empty() and heights[st.top()] > heights[i]){
                int top = heights[st.top()];
                st.pop();
                int c = st.empty() ? -1 : st.top();
                ans = max(ans, top * (i - c - 1));
            }
            st.push(i);
        }
        return ans;
    }
};