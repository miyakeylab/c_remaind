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
  int r,c;
  cin >> r >> c;
  int ans[2][2] = {0};
  cin >> ans[0][0] >> ans[0][1] >> ans[1][0] >> ans[1][1];

  cout << ans[r -1][c-1] << endl;
  
  return 0;
}