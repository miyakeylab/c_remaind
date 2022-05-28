#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long
string alp = "abcdefghijklmnopqrstuvwxyz";
signed main()
{
  int a,b,c;
  cin >> a >> b >> c;

  if(a <= b && b <= c)
  {
    cout << "Yes" << endl;
  }
  else if(c <= b && b <= a)
  {
    cout << "Yes" << endl;
  }
  else if(a == b && b == c)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}