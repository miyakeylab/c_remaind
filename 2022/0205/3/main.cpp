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
  string s1;
  ll max;
  ll res = 0;
  cin >> max;
  s1 = to_string(max);
  ll size = 9;
  ll pre_size = 9;
  ll n = 1;
  for (int i = 0; i < s1.size(); i++)
  {
    if (max > size)
    {
      cout << "pre" << endl;
      res += (size * (size + 1)) / 2;
      cout << res << endl;
    }
    else
    {
      cout << "end" << endl;
      ll last = (max % n) + 1;
      int p = int(s1[0] - '0');
      cout << n << endl;
      cout << max << endl;
      cout << last << endl;
      cout << p << endl;
      if (p > 1)
      {
        res += ((n * (n + 1)) / 2) * p;

        cout << ((n * (n + 1)) / 2) * p;
      }
      //res += (last * (last + 1)) / 2;
    }
    pre_size = size;
    size *= 10;
    size += 9;
    n *= 10;
  }

  cout << "last" << endl;
  cout << res % 998244353;
  return 0;
}