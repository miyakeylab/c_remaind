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
	ll x;
	cin >> x;

	if(x > 0){
	cout << x / 10;
	}else{
		long long  data1 = x / 10;
		long long double data2 = x / 10;
		if((data1 - data2) == 0){
			cout << x / 10;
		}else{
			cout << (x / 10) -1;
		}
	}

	return 0;
}