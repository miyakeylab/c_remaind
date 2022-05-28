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
	int h,w;
	cin >> h >> w;

	bool first = false;
	int count  = 0;
	int first_j  = 0;
	for(int i = 0; i < h; i++)
	{
		string s;
		cin >> s;
		bool thistime = false;
		int thisCount = 0;
		for(int j = 0; j <s.size(); j++)
		{
			if(thistime){
				thisCount++;
			}

			if(s[j] == 'o' && !first)
			{
				first = true;
				thistime = true;
				first_j = j;
			}
			else if(s[j] == 'o' && first &&thistime)
			{
				count += thisCount;
				cout << count << endl;
				return 0;
			}else if(s[j] == 'o' && first && !thistime)
			{
				if(j - first_j > 0)
				{
					count+= (j - first_j);
				}else if(j - first_j < 0)
				{
					count+= (first_j - j);
				}
				

				cout << count << endl;
				return 0;
			}
		}
		if(first){
			count++;
		}
	}

	return 0;
}