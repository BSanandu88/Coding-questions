class Solution {
public:
    int count = 0;
    
    void findSubStrings(string s, int start, int l){
        for(int j = start; j < l; j++){
            if(isPalindrome(start, j, s)){
                count++;
            }
        }
    }
    
    bool isPalindrome(int start, int end, string s){
        while(start <= end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
    
    int countSubstrings(string s) {
        for(int i = 0; i < s.length(); i++){
            findSubStrings(s, i, s.length());
        }
        return count;
    }
};