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
	bool a[2002];
	cin >> n;
	
	for (int i = 0; i < 2001; i++)
	{
		a[i] = false;
 	}

	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		a[p] = true;
	}

	for (int i = 0; i < 2001; i++)
	{
		if(!a[i]){
			cout << i;
			break;
		}
	}
	return 0;
}