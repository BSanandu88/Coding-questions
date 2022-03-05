class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<=n;j+=2){
                if(i+j <= n){
                    for(int k=0;k<j;k++){
                        sum+= arr[i+k];
                    }
                }
                else{
                    break;
                }
            }
        }
        
        return sum;
    }
};