#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

long long fx(long long x){
  return x * x + 2 * x + 3;
}

signed main(){
  long long n;

  cin>>n; 

  long long rtn = fx(fx(fx(n) + n) + fx(fx(n)));

  cout << rtn;
  return 0;

} 