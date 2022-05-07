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
  int n;
  cin >> n;

  if (n == 1)
  {
    cout << "1";
    return 0;
  }

  string rtn = to_string(1) + " " + to_string(2) + " " +  to_string(1);

  for (int i = 2; i < n; i++)
  {
    rtn = rtn + " " + to_string(i + 1) + " " + rtn;
  }
  cout << rtn;

  return 0;
}