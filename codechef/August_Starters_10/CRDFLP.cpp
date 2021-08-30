/* Chef found N magical cards in his drawer. Each card has a number written on each of its faces. He places all the cards on the table in a front face-up manner.

Chef denotes the numbers on the front face by A1,A2,...,AN and on the back face by B1,B2,...,BN. Chef can choose some (possibly zero or all) cards and flip them, then he will calculate the bitwise AND of all the numbers currently in a face-up manner.

Now Chef wonders what is the maximum bitwise AND that he can achieve and what is the minimum number of cards he has to flip to achieve this value. Can you help him find it?

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains three lines of input.
The first line contains a single integer N - the number of cards.
The second line contains N space-separated integers A1,A2,...,AN - the numbers on the front face of the cards
The third line contains N space-separated integers B1,B2,...,BN - the numbers on the back face of the cards
Output Format
For each test case, print a single line containing two space-separated integers, first denoting the maximum bitwise AND possible and second denoting the minimum number of flips required to achieve it.

Constraints
1≤T≤104
1≤N≤105
0≤Ai≤230−1
0≤Bi≤230−1
Sum of N over all testcases does not exceeds 105.
Sample Input 1 
3
3
4 6 8
2 1 2
3
0 2 0
2 0 8
3
1 2 1
2 3 6
Sample Output 1 
2 2
0 0
2 2
Explanation
Test case 1: The maximum AND is obtained after flipping the first and third cards achieving a configuration of [2,6,2] which yields a bitwise AND of 2.

Test case 2: Every possible configuration of the cards yields a bitwise AND equal to 0. So to ensure the minimum number of operations, Chef performs no flip. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        // State : -1 undecided, 0 normal, 1 flipped
        vector<ll>a(n),b(n),state(n,-1);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(ll bit = 1 << 29 ; bit > 0; bit >>= 1){
            bool correct = true;
            for(ll i = 0; i < n; i++){
                if(state[i] == 0 and !(a[i]&bit))correct = false;
                else if(state[i] == 1 and !(b[i]&bit))correct = false;
                else if(!(a[i]&bit) and !(b[i]&bit))correct = false;
            }
            if(!correct) continue;
            for(ll i = 0;i < n; i++){
                if(state[i] != -1)continue;
                if(!(a[i]&bit))state[i] = 1;
                else if(!(b[i]&bit))state[i] = 0;
            }
        }
        ll ans = (1 << 30) - 1, flips = 0;
        for(ll i = 0; i< n; i++){
            if(state[i] == 1){
                flips++;
                ans &= b[i];
            }else ans &= a[i];
        }
        cout << ans << ' ' << flips << '\n';
    }
    return 0;
}