#include <bits/stdc++.h>
#include <math.h>
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
  int a,b,d;
  cin >> a >> b >> d;

  if(d == 180 || (a == 0 && b == 0)){
	cout << -1 * a << " " << -1 *b << endl;
	return 0;
  }
  double rad = d * M_PI / 180;
  double s = sin(rad);
  double c = cos(rad);

  double aa = (a * c) - (b * s);
  double bb = (a * s) + (b * c);

  printf("%.11f",aa);
  cout << " ";
  printf("%.11f",bb);

  return 0;
}