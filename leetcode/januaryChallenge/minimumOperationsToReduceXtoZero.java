/* You are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.

Return the minimum number of operations to reduce x to exactly 0 if it's possible, otherwise, return -1. */

class Solution {
    public int minOperations(int[] nums, int x) {
        int target = -x;
        for(int i:nums) target += i;
        if(target == 0)return nums.length;
        
        Map<Integer,Integer>map = new HashMap<>();
        map.put(0,-1);
        int res = -1;
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum += nums[i];
            if(map.containsKey(sum - target)){
                res = Math.max(res,i-map.get(sum - target));
            }
            map.put(sum,i);
        }
        return res==-1?-1:nums.length-res;
    }
}