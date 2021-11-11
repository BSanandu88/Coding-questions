// We are given a list nums of integers representing a list compressed with run-length encoding.

// Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

// Return the decompressed list.
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> l;
        for(int i=0; i<nums.size() - 1;i+=2){
            int freq = nums[i];
            int val = nums[i + 1];
            while(freq--){
                l.emplace_back(val);
            }
        }
        return l;
    }
};