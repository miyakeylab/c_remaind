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

  int one = n / 100;
  int two = (n % 100) /10;
  int three = ((n % 100) % 10)/10;

  int res = n + ((two * 100) +(three * 10) + one) + ((three * 100) +(one * 10) + two);
  cout << res;
  return 0;

}