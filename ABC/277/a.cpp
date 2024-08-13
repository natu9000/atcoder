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
	int n,x;
    cin>>n>>x;
    vector<int> p(n);
    rep(i,n) cin>>p[i];
    rep(i,n){
        if(x==p[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }

	return 0;
}