/* During the hypnosis session, Nicholas suddenly remembered a positive integer n, which doesn't contain zeros in decimal notation.

Soon, when he returned home, he got curious: what is the maximum number of digits that can be removed from the number so that the number becomes not prime, that is, either composite or equal to one?

For some numbers doing so is impossible: for example, for number 53 it's impossible to delete some of its digits to obtain a not prime integer. However, for all n in the test cases of this problem, it's guaranteed that it's possible to delete some of their digits to obtain a not prime number.

Note that you cannot remove all the digits from the number.

A prime number is a number that has no divisors except one and itself. A composite is a number that has more than two divisors. 1 is neither a prime nor a composite number.

Input
Each test contains multiple test cases.

The first line contains one positive integer t (1≤t≤103), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer k (1≤k≤50) — the number of digits in the number.

The second line of each test case contains a positive integer n, which doesn't contain zeros in decimal notation (10k−1≤n<10k). It is guaranteed that it is always possible to remove less than k digits to make the number not prime.

It is guaranteed that the sum of k over all test cases does not exceed 104.

Output
For every test case, print two numbers in two lines. In the first line print the number of digits, that you have left in the number. In the second line print the digits left after all delitions.

If there are multiple solutions, print any.

Example
inputCopy
7
3
237
5
44444
3
221
2
35
3
773
1
4
30
626221626221626221626221626221
outputCopy
2
27
1
4
1
1
2
35
2
77
1
4
1
6
Note
In the first test case, you can't delete 2 digits from the number 237, as all the numbers 2, 3, and 7 are prime. However, you can delete 1 digit, obtaining a number 27=33.

In the second test case, you can delete all digits except one, as 4=22 is a composite number. */

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool isPrime(int n){
    if(n == 1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)return 0;
    }
    return 1;
}

void solve(){
   int n;
   cin >> n;
   string s;
   cin >> s;
   for(int i=0;i<n;i++){
       string x = s.substr(i,1);
       int val = stoi(x);
       if(!isPrime(val)){
           cout << 1 << endl;
           cout << x << endl;
           return;
       }
   }
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           string x = s.substr(i,1) + s.substr(j,1);
           int val = stoi(x);
           if(!isPrime(val)){
               cout << 2 << endl;
               cout << x << endl;
               return ;
           }
       }
   }
}

// Another approach
void solve1(){
  for(int i=0;i<n;i++){
      if(s[i] == '1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9'){
          cout << 1 << endl;
          cout << s[i] <<endl;
          return;
      }
  }
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(!isPrime[(s[i] - '0')*10 + (s[i] - '0')]){
              cout << 2 << endl;
              cout << s[i] << s[j] << endl;
              return;
          }
      }
  }

}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}