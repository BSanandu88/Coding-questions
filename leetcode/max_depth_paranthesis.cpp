// Easy 

class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int n = s.length();
        int max_val = 0;
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(s[i]);
                count += 1;
            }else if(s[i] == ')'){
                if(st.top() == '('){
                    st.pop();
                    count -= 1;
                }else{
                    return 0;
                }
            }
            max_val = max(max_val,count);
        }
        return max_val;
    }
};