class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = n - 1;
        while(i < n - 1 and arr[i] < arr[i + 1]){
            i += 1;
        }
        while(j > 0 and arr[j - 1] > arr[j]){
            j -= 1;
        }
        return (i == j and j < n - 1 and i > 0);
    }
};