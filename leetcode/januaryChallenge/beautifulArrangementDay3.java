/* Suppose you have n integers from 1 to n. We define a beautiful arrangement as an array that is constructed by these n numbers successfully if one of the following is true for the ith position (1 <= i <= n) in this array:

The number at the ith position is divisible by i.
i is divisible by the number at the ith position.
Given an integer n, return the number of the beautiful arrangements that you can construct.

 

Example 1:

Input: n = 2
Output: 2
Explanation: 
The first beautiful arrangement is [1, 2]:
Number at the 1st position (i=1) is 1, and 1 is divisible by i (i=1).
Number at the 2nd position (i=2) is 2, and 2 is divisible by i (i=2).
The second beautiful arrangement is [2, 1]:
Number at the 1st position (i=1) is 2, and 2 is divisible by i (i=1).
Number at the 2nd position (i=2) is 1, and i (i=2) is divisible by 1.
Example 2:

Input: n = 1
Output: 1
 

Constraints:

1 <= n <= 15    */

class Solution{

    int ans = 0;

    public int countArrangement(int n){
        int[] nums = new int[n+1];

        for(int i=1;i<=n;i++){
            nums[i] = i;
        }
        depthFirstSearch(nums,1);
        return ans;
    }

    private void depthFirstSearch(int[] nums,int idx){

        if(idx == nums.length){
            ans++;
            return;
        }
        for(int j=idx;j<nums.length;j++){
            if(nums[j] % idx==0 || idx%nums[j] == 0){
                swap(nums,idx,j);
                depthFirstSearch(nums, idx + 1);
                swap(nums,j,idx);
            }
        }
    }

    private void swap(int[] arr,int i,int j){
        if(i==j){
            return;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}