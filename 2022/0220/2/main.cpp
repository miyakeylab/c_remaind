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
	vector<long long> s;
	for(int i =0;i < n;i++){
		long long d;
		cin >> d;
		s.push_back(d);
	}

	s.erase(unique(s.begin(), s.end()), s.end());
	cout << s.size();
	return 0;
}