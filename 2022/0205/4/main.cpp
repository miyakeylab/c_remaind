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
  string s;

  cin >> n;
  cin >> s;
  list<int> res;
  res.push_back(0);
  int pre = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
    {
      res.push_front(i + 1);
      res.splice(std::next(res.begin(), pre + 1), res, res.begin());
    }
    else
    {
      res.push_front(i + 1);
      res.splice(std::next(res.begin(), pre + 2), res, res.begin());
    }
    for (int x : res)
    {
      std::cout << x << " ";
    }
    std::cout << endl;
    pre = i;
  }

  for (int x : res)
  {
    std::cout << x << " ";
  }

  return 0;
}