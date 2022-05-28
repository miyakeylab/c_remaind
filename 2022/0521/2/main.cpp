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
	int k, n;
	cin >> n >> k;
	vector<int> v;

	int max = -1;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.pb(x);

		if(max < x){
			max = x;
		}
	}
	vector<int> v2;

	for (int i = 0; i < n; i++)
	{
		if(max == v[i]){
			v2.pb(i+1);
		}
	}

	for (int i = 0; i < k; i++)
	{
		int y;
		cin >> y;
		vector<int>::iterator itr;
		itr = std::find(v2.begin(), v2.end(), y);
        if (itr != v2.end()){
			cout << "Yes";
			return 0;
		}
	}


	cout << "No";
	return 0;
}