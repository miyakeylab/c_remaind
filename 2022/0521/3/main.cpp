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

  int real[n][11];

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    for (int j = 0; j < 10; j++)
    {
      real[i][s[j] - '0'] = j;
    }
  }

  int min = -1;
  for (int p = 0; p < 10; p++)
  {
    bool check[11] = {false};
    int countCheck[11] = {0};
    int mas = 0;
    for (int i = 0; i < n; i++)
    {
      if (check[real[i][p]] )
      {
        countCheck[real[i][p]]++;
        int tt = real[i][p]+(10 * countCheck[real[i][p]]);

        if(tt > mas)
        {
          mas = tt;
        }
      }
      else
      {
        check[real[i][p]] = true;

        if (mas < real[i][p])
        {
          mas = real[i][p];
        }
      }
    }

    if (min == -1 || mas < min)
    {
      min = mas;
    }
  }
  cout << min << endl;
  return 0;
}