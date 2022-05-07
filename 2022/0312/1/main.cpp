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
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  int main = v;
  int i = 0;
  while (main >= 0)
  {

    if (i == 0)
    {
      main -= a;
      i++;
      if (main < 0)
      {
        cout << "F";
        break;
      }
    }
    else if (i == 1)
    {
      main -= b;
      i++;
      if (main < 0)
      {
        cout << "M";
        break;
      }
    }
    else
    {
      main -= c;
      i = 0;
      if (main < 0)
      {
        cout << "T";
        break;
      }
    }
  }
  return 0;
}