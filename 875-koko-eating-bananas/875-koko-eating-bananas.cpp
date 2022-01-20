class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = INT_MAX;
        while(left <= right){
            int middle = left + (right - left) / 2;
            if(canEat(piles,middle,h)){
                right = middle - 1;
            }else{
                left = middle + 1;
            }  
        }
        return left;
    }
    
    bool canEat(vector<int> &piles, int middle, int h){
        int hours = 0;
        for(int pile : piles){
            int val = pile / middle;
            hours = hours + val;
            if(pile % middle != 0) hours += 1;
        }
        return hours <= h;
    }
};