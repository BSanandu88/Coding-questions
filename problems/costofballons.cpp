#include<iostream>

using namespace std;

int minimumPricePurchasingBalloons() {
    int cost1, cost2, n;

    cin >> cost1;
    cin >> cost2;
    cin >> n;

    int status1, status2;
    int total1 = 0, total2 = 0;
    while(n--) {
        cin >> status1;
        cin >> status2;

        total1 += cost1*status1 + cost2*status2;
        total2 += cost1*status2 + cost2*status1;
        
    }
    return total1 < total2 ? total1 : total2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << minimumPricePurchasingBalloons() << endl;
    }

    return 0;
}