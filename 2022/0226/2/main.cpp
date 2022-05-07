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
	int n,m;
	cin >> n >> m;
	vector<long> a,b;
	for(int i =0;i < n;i++){
		long d;
		cin >> d;
		a.push_back(d);
	}

	for(int i =0;i < m;i++){
		long d;
		cin >> d;
		vector<long>::iterator itr;
		itr = std::find(a.begin(), a.end(), d);
        if (itr == a.end()){
			cout << "No";
			return 0;
		}else{
			int index = std::distance(a.begin(), itr);
			a.erase(a.begin() + index);
		}

		b.push_back(d);
	}

	cout << "Yes";
	return 0;
}