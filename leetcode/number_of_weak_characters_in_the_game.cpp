/* You are playing a game that contains multiple characters, and each of the characters has two main properties: attack and defense. You are given a 2D integer array properties where properties[i] = [attacki, defensei] represents the properties of the ith character in the game.

A character is said to be weak if any other character has both attack and defense levels strictly greater than this character's attack and defense levels. More formally, a character i is said to be weak if there exists another character j where attackj > attacki and defensej > defensei.

Return the number of weak character */

// first approach
class Solution {
public:

    static bool comp(vector<int> &a,vector<int> &b){
        if (a[0] == b[0])
        {
            return a[1] > b[1];
        }
        return a[0] < b[0];
        
    }

    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        // sort the array
        sort(properties.begin(),properties.end(),comp);
        int maxValue = INT_MIN;
        int ans = 0;
        for(int i = properties.size()-1;i >= 0; i--){
            if(properties[i][1] < maxValue)
                ans++;
            maxValue = max(maxValue,properties[i][1]);
        }
        return ans;
    }
};


// second approach
class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int size = nums.size();
        int a = nums[size - 1][0];
        int b = nums[size - 1][1];
        int l_max  = nums[size - 1][1];
        for(int i=size-2;i >= 0;i--){
            if(nums[i][0] < nums[i+1][0]){
                b = max(l_max,b);
                l_max = max(b,nums[i][i]);
            }
            if(nums[i][0] <  a and nums[i][1] < b)
                ans++;
        }
        return ans;
    }
};

// third approach

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        // sort on attack
        sort(arr.begin(),arr.end());
        multiset<int>s; // stores defense
        for(auto ele : arr){
            s.insert(ele[1]);
        }
        int c = 0;
        for(int i=0;i<arr.size();i++){
            int j = i;
            if(i == 0 or arr[i][0] != arr[i-1][0]){
                while(j < arr.size() and arr[j][0] == arr[i][0]){
                    auto idx = s.find(arr[j][1]);
                    s.erase(idx);
                    j++;
                }
            }
            auto idx = s.upper_bound(arr[i][1]);
            if(idx != s.end()){
                c++;
            }
            return c;
        }
    }
};