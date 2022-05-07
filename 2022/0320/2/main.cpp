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
	string t;
	cin >> n >> t;
	int recent = 0;
	int recent_x = 0;
	int recent_y = 0;

	for (int i = 0; i < n; i++)
	{
		if (t[i] == 'R')
		{
			recent++;
			if (recent > 3)
			{
				recent = 0;
			}
		}
		else
		{

			if (recent == 0)
			{
				recent_x++;
			}
			else if (recent == 1)
			{
				recent_y--;
			}
			else if (recent == 2)
			{
				recent_x--;
			}
			else if (recent == 3)
			{
				recent_y++;
			}
		}
	}

	cout << recent_x << " " << recent_y;

	return 0;
}