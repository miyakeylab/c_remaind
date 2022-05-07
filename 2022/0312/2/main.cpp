#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

int vector_finder(std::vector<int> vec, int number)
{
	auto itr = std::find(vec.begin(), vec.end(), number);
	size_t index = std::distance(vec.begin(), itr);
	if (index != vec.size())
	{ // 発見できたとき
		return 1;
	}
	else
	{ // 発見できなかったとき
		return 0;
	}
}

signed main()
{
	int n;
	cin >> n;
	vector<int> va;
	vector<int> vb;

	for (int i = 0; i < n; i++)
	{
		int s;
		cin >> s;
		va.push_back(s);
	}

	for (int i = 0; i < n; i++)
	{
		int s;
		cin >> s;
		vb.push_back(s);
	}

	int count1 = 0;

	for (int i = 0; i < n; i++)
	{
		if (va[i] == vb[i])
		{
			count1++;
		}
	}

	int count2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (vector_finder(vb, va[i]) == 1)
		{
			for (int p = 0; p < n; p++)
			{
				if (va[i] == vb[p] && i != p)
				{
					count2++;
					break;
				}
			}
		}
	}
	cout << count1 << endl;
	cout << count2 << endl;
	return 0;
}