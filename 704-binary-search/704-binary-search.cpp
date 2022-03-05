class Solution {
public:
    int binarysearch(vector<int> &nums, int l, int r, int target){
         while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }else if(nums[mid] > target){
                r = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int index = binarysearch(nums, l, r, target);
        return index;
    }
};