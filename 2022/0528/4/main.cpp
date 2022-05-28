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

  bool data[200001] = {false};
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    data[b] = true;
  }

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if(data[i])
    {
        for (int p = i+1; p <= n; p++){
            if(data[p])
            {
                for (int q = p+1; q <= n; q++){
                    if(data[q])
                    {
                        ans++;
                    }
                }
            }
        }
    }
    
  }
  cout << ans << endl;
  return 0;
}