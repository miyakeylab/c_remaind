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
	double a, b,c,d;
	cin >> a >> b;
	//double d = (double)(b / a);

	if(a == 0)
	{
		c = 0;
		if(b < 0){
			d = -1;
		}else{
			d = 1;
		}
	}else if(b == 0){
		d = 0;
		if(a < 0){
			c = -1;
		}else{
			c = 1;
		}
	}else{
	  double e = sqrt(b*b + a*a);
	  //cout << printf("%.11f", e);
	  c = a / e;
	  d = b / e;

    }

	cout << printf("%.11f", c) << " " << printf("%.11f", d) << endl;
	return 0;
}