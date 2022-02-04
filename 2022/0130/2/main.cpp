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
  int h,w;

  cin>>h; 
  cin>>w; 

  int a[h+1][w+1];
 	for (int i = 0; i < h; i++)
	{
		for (int n = 0; n < w; n++)
		{
			cin >> a[i][n];
		}
	} 

	for (int n = 0; n < w; n++)
	{ 	
		for (int i = 0; i < h; i++)
		{
			cout << a[i][n] << " ";
		}
		cout << endl;
	}
	
  return 0;

}