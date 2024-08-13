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
	int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    rep(i,k){
        a.erase(a.begin());
        a.push_back(0);
    }
    rep(i,n)cout<<a[i]<<endl;

	return 0;
}