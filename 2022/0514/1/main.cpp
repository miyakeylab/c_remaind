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
  string s;
  cin >> s;

  if (s.length() == 1)
  {
    cout << s + s + s + s + s + s << endl;
  }
  else if (s.length() == 2){
    cout << s + s + s << endl;
  
  }
  else
  {
    cout << s + s << endl;
  }
  return 0;
}