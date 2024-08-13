#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define REP(i,l,n) for(ll i=(l);i<(n);i++)
#define per(i,n) for(ll i=(n);i>0;i--)
#define pf(n) printf("%d\n",n)
#define pff(a,b) printf("%d  %d\n",a,b);
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = 1001001001;
const double PI = acos(-1);
const ll mod = 1000000007;


int main() {
	int a, b;
    cin >> a >> b;
    int ab = a + b;
    if(ab >= 15 and b >= 8){
        cout<< 1 <<endl;
    }
    else if(ab >= 10 and b >= 3){
        cout<< 2 <<endl;
    }
    else if(ab >=3){
        cout<< 3 <<endl;
    }
    else{
        cout<< 4 <<endl;
    }

	return 0;
}