class Solution {
public:
    bool divideArray(vector<int>& A) {
        sort(begin(A), end(A));
        for (int i = 0; i < A.size(); i += 2) {
            if (A[i] != A[i + 1]) return false;
        }
        return true;
    }
};