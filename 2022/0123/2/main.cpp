#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

signed main(){
  int n;

  cin>>n; 
	vector<int> a((4*n)-1);
	for (int i = 0; i < ((4*n)-1); i++) cin >> a[i];

	map<int, vector<int>> point;
	for (int i = 0; i < ((4*n)-1); i++)
	{
		point[a[i]].push_back(i + 1);
	}
	for (int i = 0; i < ((4*n)-1); i++)
	{
     // cout << "ID:" << a[i]<< endl;
     // cout << point[a[i]].size() << endl;
		if (4 > point[a[i]].size())
		{
			cout << a[i];
      break;
		}
	}
  return 0;

}