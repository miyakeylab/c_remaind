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
  long long n, k;
  cin >> n >> k;
  vector<long long> a, b;

  for (int i = 0; i < n; i++)
  {
    long long p;
    cin >> p;
    a.push_back(p);
  }

  for (int i = 0; i < n; i++)
  {
    long long p;
    cin >> p;
    b.push_back(p);
  }

  for (int i = 0; i < n - 1; i++)
  {
    long long k = a[i] - a[i+1];
    long long k = a[i] - a[i+1];


  }


  return 0;
}