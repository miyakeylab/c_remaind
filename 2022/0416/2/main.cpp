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
	ll a,b,k;
	cin >> a >> b>> k;

	ll count = 0;

	while(a < b){
		a = a * k;
		count++;
	}

	cout << count;

	return 0;
}