/* Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Find the kth positive integer that is missing from this array.

 

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000
1 <= k <= 1000
arr[i] < arr[j] for 1 <= i < j <= arr.length  */


class Solution {
    public int findKthPositive(int[] arr, int k) {
        int n = arr.length;
        int l = 0,r = n-1;
        int missing_number = find_number(arr[n-1],n);
        while(l <= r){
            int mid = l + (r-l)/2;
            missing_number = find_number(arr[mid],mid+1);
            if(missing_number >= k) r = mid-1;
            else l = mid+1;
        }
        if(r == -1) return k;
    return arr[r] + k-find_number(arr[r],r+1);
    }
    
    int find_number(int actual,int expected){
        return actual - expected;
    }
}