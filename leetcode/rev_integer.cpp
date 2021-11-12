// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
class Solution {
public:
    int reverse(int x) {
        if(x <= -pow(2,31) or x >= pow(2,31)){
            return 0;
        }else if(x == 0){
            return 0;
        }else{
            if(x >= 0){
                long long int temp = x;
                long long int ans = 0;
                while(temp > 0){
                    ans = ans * 10 + temp % 10;
                    if(ans >= pow(2,31)){
                        return 0;
                    }
                    temp /= 10;
                }
                return ans;
            }else{
                long long int temp = abs(x);
                long long int ans = 0;
                while(temp > 0){
                    ans = ans * 10 + temp % 10;
                    if(ans >= pow(2,31)){
                        return 0;
                    }
                    temp /= 10;
                }
                return (-1) * ans;
            }
        }
    }
};