
#include <bits/stdc++.h>
using namespace std;

long a[200010];

int main() {
    int n = 0;
    cin >> n;

    for (int i=0; i < n;i++)
    {
      cin >> a[i];
    }
    long ans = 0;
    for (int p = 0; p < n - 1; p++)
    {
      for (int l = p+1; l < n; l++)
      {
        ans += a[p] * a[l];
      }
    }
    cout << ans % 10000000;

    return 0;
}