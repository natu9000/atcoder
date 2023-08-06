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
	int n,m;
    cin>>n>>m;
    vector<pair<int,int>> ab(m);
    rep(i,m){
        cin>>ab[i].first>>ab[i].second;
    }
    map<int,vector<int>> ans;
    vector<int> cnt(n);
    rep(i,m){
        ans[ab[i].first].push_back(ab[i].second);
        ans[ab[i].second].push_back(ab[i].first);
    }
    rep(i,n){
        cnt[i]=ans[i+1].size();
    }
    rep(i,n){
        sort(ans[i+1].begin(),ans[i+1].end());
    }
    rep(i,n){
        cout<<cnt[i]<<" ";
        rep(j,ans[i+1].size()){
            cout<<ans[i+1][j]<<" ";
        }
        cout<<"\n";
    }

	return 0;
}