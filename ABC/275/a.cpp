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

int f(int a){
    if(a==0){return 1;}
    return a*f(a-1);
}

int main() {
	int n;
    cin>>n;
    ll h[1000];
    rep(i,n) cin>>h[i];
    int ans=1;
    int mx=h[0];
    rep(i,n){
        if(!i)continue;
        if(h[i]>mx){
            mx=h[i];
            ans=i+1;
        }
    }
    cout<<ans<<endl;

	return 0;
}