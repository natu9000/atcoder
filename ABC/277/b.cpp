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
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    string s1="HDCS";
    string s2="A23456789TJQK";
    bool ok=true;
    rep(i,n)rep(j,i) if(s[i]==s[j]) ok=false;
    rep(i,n){
        if(!count(s1.begin(),s1.end(),s[i][0])){
            ok=false;
        }
        if(!count(s2.begin(),s2.end(),s[i][1])){
            ok=false;
        }
    }
    if(ok) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

	return 0;
}