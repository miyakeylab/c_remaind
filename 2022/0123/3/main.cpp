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
  int m;
  cin>>n; 
  cin>>m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];
  vector<string> t(n);
  for (int i = 0; i < m; i++) cin >> t[i];
  int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == t[index])
		{
			cout << "Yes" << endl;
			index++;
			if(index >=  m ){
				break;
			}
		}else{
			cout << "No" << endl;
		}
	}
  return 0;

}