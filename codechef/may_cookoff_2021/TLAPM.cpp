#include<bits/stdc++.h>
using namespace std;

int matrix[1010][1010];

void inf(){
    for(int i=1;i<=1000;i++){
        matrix[i][1] = i * (i + 1)/2;
        for(int j=2;j<=1000;j++){
            matrix[i][j] = matrix[i][j-1] + (j-1) + (i-1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    inf();
    int t;
    cin >> t;
    while(t--) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;
        for(int i=x1;i<=x2;i++){
            sum += matrix[i][y1];
        }
        for(int i=y1+1;i<=y2;i++){
            sum += matrix[x2][i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}