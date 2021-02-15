#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void enterInput(vector<int> &a,int n){
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
}


int index(vector<int>v,int k){
    auto it = find(v.begin(),v.end(),k);
    if(it != v.end()){
        int ct = it-v.begin();
        return ct;
    }else{
        return -1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,count = 0;
        cin>>n;

        vector<int> m;
        enterInput(m,n);
        vector<int>pos(n);
        for(int i=0;i<=n-1;i++){
            pos[i] = i;
        }
        vector<int>length;
        enterInput(length,n);
        vector<int>b(n);
        for(int i=0;i<=n-1;i++){
            b[i] = m[i];
        }
        sort(b.begin(),b.end());
        for(int j=1;j<=n-1;j++){
            int ind = index(m,b[j]);
            int c = pos[index(m,b[j-1])];
            int s = ind;

            while(s <= c){
                s += length[ind];
                pos[ind] = s;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}