/* Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i if non of the above conditions are true. */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=1; i<=n; i++){
            if(i % 3 == 0 and i%15 != 0){
                v.push_back("Fizz");
            }else if(i % 5 == 0 and i%15 != 0){
                v.push_back("Buzz");
            }else if(i % 15 == 0){
                v.push_back("FizzBuzz");
            }else{
                v.push_back(to_string(i));
            }
        }
        return v;
    }
};