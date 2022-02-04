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
  ll n;

  cin >> n;
  if (n >= -2147483648 && n < 2147483648)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
  return 0;
}