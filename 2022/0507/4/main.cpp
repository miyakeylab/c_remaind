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
  int n, q;
  cin >> n;

  vector<vector<int> > data(200001, vector<int>(0));
  std::vector<bool> is_prime(200001, false);
  for (int i = 0; i < n; i++)
  {
    int b = 0;
    cin >> b;
    data.at(b).push_back(i + 1);
    is_prime[b] = true;
  }

  cin >> q;

  for (int p = 0; p < q; p++)
  {
    int l, r, x;
    cin >> l >> r >> x;

    int count = 0;

    if (is_prime[x] == false)
    {
      cout << 0 << endl;
      continue;
    }

    std::vector<int>::iterator it = std::find_if(data.at(x).begin(), data.at(x).end(), [&](int k)
                                                 { return k >= l && k <= r; });
    if (it != data.at(x).end())
    {
      int size_data = data.at(x).size();
      int index = std::distance(data.at(x).begin(), it);
      while (data.at(x).at(index) >= l && data.at(x).at(index) <= r)
      {
        count++;
        index++;
        if (size_data <= index)
        {
          break;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}