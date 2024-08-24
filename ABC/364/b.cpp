#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define REP(i,l,n) for(ll i=(l);i<(n);i++)
#define per(i,n) for(ll i=(n);i>0;i--)
#define pf(n) printf("%d\n",n)
#define pff(a,b) printf("%d %d\n",a,b);
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = 1001001001;
const double PI = acos(-1);
const ll mod = 1000000007;


int main() {
    int h,w,s1,s2;
    cin>>h>>w;
    cin>>s1>>s2;
    char c[100][100];
    rep(i,h)rep(j,w) cin>>c[i][j];
    string x;
    cin>>x;
    s1--;
    s2--;

    rep(i,x.size()){
      //pff(s1,s2);
        if(x[i]=='L'){
            if(s2-1>=0 and c[s1][s2-1]!='#') s2--;
        }
        if(x[i]=='R'){
            if(s2+1<w and c[s1][s2+1]!='#') s2++;
        }
        if(x[i]=='U'){
            if(s1-1>=0 and c[s1-1][s2]!='#') s1--;
        }
        if(x[i]=='D'){
            if(s1+1<h and c[s1+1][s2]!='#') s1++;
        }
    }
    pff(s1+1,s2+1);

    return 0;
}