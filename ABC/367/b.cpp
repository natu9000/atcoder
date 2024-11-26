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
    string s;
    cin>>s;
    int p;
    rep(i,s.size()){
        if(s[i]=='.') p=i;
    }
    string ans=s;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0') ans.pop_back();
        else break;
    }
    if(ans[ans.size()-1]=='.') ans.pop_back();
    cout<<ans<<endl;
    


    return 0;
}