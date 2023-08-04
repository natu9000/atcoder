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
	ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll ans=0;
    ll num=998244353;
    a=(a%num)*(b%num);
    a%=num;
    a=(a%num)*(c%num);
    a%=num;
    d=(d%num)*(e%num);
    d%=num;
    d=(d%num)*(f%num);
    d%=num;
    ans=(a+num)-d;
    ans%=num;
    cout<<ans<<endl;

	return 0;
}