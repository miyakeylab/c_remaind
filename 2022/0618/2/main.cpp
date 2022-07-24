#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<long, long>;

#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)

signed main()
{
  int n;
  cin >> n;
  ll q =0;
  ll x[4] = {0,0,0,0};

  rep(i, n)
  {
	ll a;
	cin >> a;

	x[0] = 1;

	ll pre[4];
	ll newlist[4] = {0,0,0,0};
	pre[0] = x[0];
	pre[1] = x[1];
	pre[2] = x[2];
	pre[3] = x[3];
    
	rep(p,4){
		if(pre[p] == 1){
			if(p + a > 3){
				q += 1;
			}
			else{
				newlist[p+a] = 1;
			}
		}
	}
	x[0] = newlist[0];
	x[1] = newlist[1];
	x[2] = newlist[2];
	x[3] = newlist[3];

  }
  cout << q << endl;

  return 0;
}