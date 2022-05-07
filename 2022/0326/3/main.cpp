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
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> a;
  ll les = 0;
  bool max = false;

  for (ll i = 0; i < n + 1; i++)
  {
    ll p;
    cin >> p;
    if (les == 0)
    {
      les = p;
    }
    else if (les > p)
    {
      les = p;
    }
    a.push_back(p);
    if(p > k){
      max = true;
    }
  }

  if(n < x && max == false){
    cout << 0 << endl;
    return 0;
  }


  // cout << les << endl;
  sort(all(a), greater<ll>());
  ll count = 0;
  for (ll i = 1; i < n + 1; i++)
  {
    // cout << a[i] << endl;
    if (k > 0)
    {
      ll d = a[i] / x;
      // cout << d << endl;
      if (d > k)
      {
        ll e = a[i] - (x * k);
        // cout << e << endl;
        count += e;

        k = 0;
      }
      else
      {

        ll e = a[i] - (x * d);
        k -= d;

        if (k > 0)
        {
          ll check = e - x;

          if (check < 0)
          {
            check *= -1;
          }
          if (les > check)
          {

            e = 0;
            k -= 1;
          }
        }
        count += e;

        // cout << e << endl;
      }
    }
    else
    {
      // cout << a[i] << endl;
      count += a[i];
    }
  }

  cout << count;

  return 0;
}