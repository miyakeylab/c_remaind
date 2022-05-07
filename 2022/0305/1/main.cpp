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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  double n = 0;
  if (a >= x)
  {
    n = 1;
  }
  else if (b >= x)
  {
    double aa = a;
    double bb = b;
    double cc = c;
    double ss =  (double)( cc / (bb - aa) );
    n =ss;
  }

  cout << printf("%.11f", n);
  return 0;
}