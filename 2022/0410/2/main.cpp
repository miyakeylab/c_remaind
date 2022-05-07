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
	vector<string> s, t;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string p, q;
		cin >> p >> q;
		s.pb(p);
		t.pb(q);
	}
	bool rtn = false;
	for (int i = 0; i < n; i++)
	{
		string s_val = s[i];
		string t_val = t[i];

		bool rtn1 = false, rtn2 = false;
		for (int j = 0; j < n; j++)
		{
			if(i != j){
				if (s[j] == s_val)
				{
					rtn1 = true;
					break;
				}else if(t[j] == s_val){
					rtn1 = true;
					break;
				}
			}
		}
		if(rtn1 == true){
			for (int r = 0; r < n; r++)
			{
				if(i != r){
					if (t[r] == t_val)
					{
						rtn2 = true;
						break;
					}else if(s[r] == t_val){
						rtn2 = true;
						break;
					}
				}
			}

			if(rtn1 == true && rtn2 == true){
				rtn = true;
				break;
			}
		}
	}

	if(rtn == true){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
	return 0;
}