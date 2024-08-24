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
    int a;
    cin >> a;
    int ans=0;
    if(a%4!=0){
        ans=365;
    }
    else if(a%4==0 and a%100!=0){
        ans=366;
    }
    else if(a%100==0 and a%400!=0){
        ans=365;
    }
    else{
        ans=366;
    }
    cout<<ans<<endl;
    return 0;
}