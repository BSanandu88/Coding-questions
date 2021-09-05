/* You are playing a game that contains multiple characters, and each of the characters has two main properties: attack and defense. You are given a 2D integer array properties where properties[i] = [attacki, defensei] represents the properties of the ith character in the game.

A character is said to be weak if any other character has both attack and defense levels strictly greater than this character's attack and defense levels. More formally, a character i is said to be weak if there exists another character j where attackj > attacki and defensej > defensei.

Return the number of weak character */
// first approach
class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        // sort the array
        sort(properties.begin(),properties.end());
        int maxValue = INT_MIN;
        int ans = 0;
        for(int i = properties.size()-1;i >= 0; i--){
            if(properties[i][1] < maxValue)
                ans++;
            maxValue = max(maxValue,properties[i][1]);
        }
    }
};