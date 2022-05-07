#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

signed main()
{
  ll q;
  cin >> q;
  vector<pair<long, long>> vp;

  for (int i = 0; i < q; i++)
  {
    int n;
    cin >> n;

    if (n == 1)
    {
      long x,y;
      cin >> x >> y;

      vp.pb(mp(x, y));
    }
    else
    {
      long long a;
      cin >> a;
      for (pll x : vp)
      {
        cout << x.ff << " " << x.ss << endl;
        long long aa = x.ff * x.ss;
        if(aa == a)
        {
          cout << aa << endl;
          break;
        }else{


        }
      }
    }
  }
}