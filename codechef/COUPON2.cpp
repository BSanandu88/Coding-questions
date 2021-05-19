
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h> // Include every standard library 
using namespace std; 

typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl; 

double EPS=1e-9; 
int INF=1000000005; 
long long INFF=1000000000000000005LL; 
double PI=acos(-1); 
int dirx[8]={ -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diry[8]={ 0, 1, -1, 0, -1, 1, -1, 1 }; 

//#define DEBUG fprintf(stderr, "====TESTING====\n") 
//#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#define FOR(a, b, c) for (int(a)=(b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a)=(b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a)=(b); (a) >= (c); --(a)) 
#define FORSQ(a, b, c) for (int(a)=(b); (a) * (a) <= (c); ++(a)) 
#define FORC(a, b, c) for (char(a)=(b); (a) <= (c); ++(a)) 
#define FOREACH(a, b) for (auto&(a) : (b)) 
#define REP(i, n) FOR(i, 0, n) 
#define REPN(i, n) FORN(i, 1, n) 
#define MAX(a, b) a=max(a, b) 
#define MIN(a, b) a=min(a, b) 
#define SQR(x) ((LL)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a)) 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define ALL(v) v.begin(), v.end() 
#define ALLA(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v)) 
#define SORTA(arr, sz) sort(ALLA(arr, sz)) 
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define PERMUTE next_permutation 
#define TC(t) while (t--) 
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)




void solve(){
	int d,c;
    cin >> d >>c;
    int a1,a2,a3; cin >>a1 >>a2 >>a3;
    int b1,b2,b3; cin >>b1 >>b2 >>b3;
    int td1 = a1 + a2 + a3;
    int td2 = b1 + b2 + b3;
    int ovt = td1 + td2 + 2*d;
    
    if(td1 >= 150 and td2 >= 150){
        int withc = td1 + td2 + c;
        int withoutc = td1 + td2 + 2*d;
        if(withoutc > withc){
            cout << "YES" <<endl;
        }/* else if(withc == withoutc){
            cout <<"NO"<<endl;
        } */else{
            cout <<"NO"<<endl;
        }
    }else if(td1 >= 150 or td2 >= 150){
        int withc = td1 + td2 + c + d;
        int withoutc = td1 + td2 + 2*d;
        if (withoutc > withc)
        {
           cout << "YES" <<endl;
        }/* else if(withc == withoutc){
            cout <<"NO"<<endl;
         */}else{
            cout<<"NO"<<endl;
        }
         
    }
}

int main(){
	FAST_INP;
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}