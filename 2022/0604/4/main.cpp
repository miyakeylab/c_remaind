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

#define YESNO(bool)        \
  if (bool)                \
  {                        \
    cout << "YES" << endl; \
  }                        \
  else                     \
  {                        \
    cout << "NO" << endl;  \
  }
#define yesno(bool)        \
  if (bool)                \
  {                        \
    cout << "yes" << endl; \
  }                        \
  else                     \
  {                        \
    cout << "no" << endl;  \
  }
#define YesNo(bool)        \
  if (bool)                \
  {                        \
    cout << "Yes" << endl; \
  }                        \
  else                     \
  {                        \
    cout << "No" << endl;  \
  }

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

bool squereCheck(ll num)
{
  ll root = (ll)floor(sqrt((ll)num));
  return (root * root) == num;
}

bool primeCheck(ll num)
{
  if (num < 2)
  {
    return false;
  }
  for (ll i = 2; i * i <= num; ++i)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

signed main()
{
  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
      {
        count++;
      }
      else
      {
        if((i * j) % 2 !=0){
          if (primeCheck(i * j))
          {
            count++;
          }
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}