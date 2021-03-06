import java.util.*;
import java.util.Scanner;

public class bubbleSort {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int[] nums = {1,5,2,9,43,26};
      bubbleSort(nums);
      System.out.print(Arrays.toString(nums));
      
    }
    
    public static void bubbleSort(int[] nums){
        for(int i=0;i<nums.length;i++){
            for(int j = 0;j<nums.length-1-i;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums,j,j+1);
                }
            }
        }
    }
    public static void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}