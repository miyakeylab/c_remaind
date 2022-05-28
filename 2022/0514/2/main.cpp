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
	ll n, w;
	cin >> n >> w;
	vector<ll> v(n);
	bool res[1000001];

	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];

		if (v[i] <= w)
		{
			res[v[i]] = true;
		}
	}

	for (ll i = 0; i <= n; i++)
	{
		for (ll p = 0 + 1; p <= n; p++)
		{
			if (p != i )
			{
				ll check = v[i] + v[p];
				if (check <= w)
				{
					res[check] = true;
				}

				for (ll q = 0; q <= n; q++)
				{
					if (q != i && q != p)
					{
						ll check2 = v[i] + v[p] + v[q];
						if (check2 <= w)
						{
							res[check2] = true;
						}
					}
				}
			}
		}
	}

	ll ans = 0;
	for (ll i = 0; i <= w; i++)
	{
		if (res[i])
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}