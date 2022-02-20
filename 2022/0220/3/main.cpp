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
	int n,x;
	cin >> n;
	cin >> x;
	vector<int> a,b;
	int s = 0;
	for(int i =0;i < n;i++){
    int a_data;
    int b_data;
    cin >> a_data;
    cin >> b_data;
    if(a_data > b_data){
      s += b_data;
    }else{
      s += a_data;
    }
    a.push_back(a_data);
    b.push_back(b_data);
	}
  if(s > x){
    cout << "No";
    return 0;
  }else if(s == x){
    cout << "Yes";
    return 0;
  }

	for(int i =0;i < n;i++){

  }
  return 0;  
}