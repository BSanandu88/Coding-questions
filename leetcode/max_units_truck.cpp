// You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:

// numberOfBoxesi is the number of boxes of type i.
// numberOfUnitsPerBoxi is the number of units in each box of the type i.
// You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.

// // Return the maximum total number of units that can be put on the truck.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(auto x : boxTypes){
            for(auto y  : x){
                cout << y << " " ;
            }cout << endl;
        }
        cout << " ------ " << endl;
        sort(begin(boxTypes),end(boxTypes),[](auto &a, auto &b){return a[1] > b[1];});
        for(auto x : boxTypes){
            for(auto y  : x){
                cout << y << " " ;
            }cout << endl;
        }
        int mx = 0;
        for(auto &box : boxTypes){
            if(truckSize <= 0) break;
            mx += min(truckSize,box[0]) * box[1];
            truckSize -= box[0];
        }
        return mx;
    }
};

int main(){
    vector<vector<int>> boxTypes{{5,10},{2,5},{4,7},{3,9}};
    int truckSize = 10;
    Solution s;
    cout << s.maximumUnits(boxTypes,truckSize) << endl;
    return 0;
}