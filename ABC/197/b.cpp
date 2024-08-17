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
    int h,w,x,y;
    cin >> h>>w>>x>>y;
    char a[200][200];
    rep(i,h)rep(j,w) cin>>a[i][j];

    int ans=0;
    for(int i=x-1;i>=0;i--){
        if(a[i][y-1]=='.'){
            ans++;
        }
        else break;
    }
    for(int i=x-1;i<h;i++){
        if(a[i][y-1]=='.'){
            ans++;
        }
        else break;
    }
    for(int j=y-1;j>=0;j--){
        if(a[x-1][j]=='.'){
            ans++;
        }
        else break;
    }
    for(int j=y-1;j<w;j++){
        if(a[x-1][j]=='.'){
            ans++;
        }
        else break;
    }
    cout<<ans-3<<endl;
    return 0;
}