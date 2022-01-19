class Solution {
public:
    int countDigitOne(int n) {
       int ans = 0;
        int p, q;
        for(long long int i = 1; i <= n; i *= 10){
            p = n / i;
            q = n % i;
            ans += ((p + 8) / 10) * i + ((p % 10 == 1) ? (q + 1) : 0);
        }
        return ans;
    }
};