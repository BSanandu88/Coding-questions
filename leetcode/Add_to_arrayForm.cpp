class Solution{
    public:
        vector<int>addToArrayForm(vector<int> &num,int k){
            reverse(begin(num),end(num));
            for(int i=0;i<k; i++){
                if(i == size(num))num.push_back(0);
                num[i] += k;
                k = num[i] / 10;
                num[i] %= 10;
            }
            reverse(begin(num),end(num));
            return num;
        }
};