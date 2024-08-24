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
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    rep(i,n) cin>>a[i];
    copy(a.begin(), a.end(),b.begin());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    int ans=0;
    rep(i,n){
        if(b[1]==a[i]) ans=i+1;
    }
    cout<<ans<<endl;
    return 0;
}