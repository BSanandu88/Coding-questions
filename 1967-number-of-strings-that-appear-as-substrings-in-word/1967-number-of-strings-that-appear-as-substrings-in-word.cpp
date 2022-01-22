class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        vector<string> substring;
        string k = "";
        for(int i = 0; i < word.size(); i++){
            for(int j = 1; j <= word.size() - i; j++){
                k = word.substr(i,j);
                substring.push_back(k);
                k = "";
            }
        }
       sort(substring.begin(),substring.end());
       substring.erase(unique(substring.begin(), substring.end()),substring.end());
       for(auto &x : substring) cout << x << " ";
       cout << endl;
       int count = 0;
       for(int i = 0; i < patterns.size(); i++){
           for(int j = 0; j < substring.size(); j++){
               if(substring[j] == patterns[i]) count++;
           }
       }
        return count;
    }
};