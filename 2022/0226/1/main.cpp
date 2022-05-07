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
  int a[11];
  for(int i = 0;i < 10;i++){
    cin >> a[i];
  }
  int res = 0;
  for(int n=0;n < 3;n++){
    res = a[res];
  }
  cout << res;
  return 0;
}