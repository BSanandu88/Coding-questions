class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int arr[26];
        for(int i = 0 ; i < 26; i++){
            arr[order[i] - 'a'] = i;
        }
        for(auto &word : words){
            for(char &c : word){
                c = arr[c - 'a'];
            }
        }
        return is_sorted(words.begin(), words.end());
    }
};