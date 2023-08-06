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
	string s;
    cin>>s;
    bool ok=false;
    rep(i,s.size()) if(s[i]=='a') ok=true;
    int ans=0;
    if(ok){
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]=='a'){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else{
        cout<<-1<<endl;
    }

	return 0;
}