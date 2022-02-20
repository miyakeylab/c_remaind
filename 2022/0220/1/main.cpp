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
  int a,b;

  cin >> a;
  cin >> b;
  if(b == 10){
    if(a == 1 || a == 9){
      cout << "Yes";
    }else{
      cout << "No";
    }
  }else{
    if((a +1) == b){
      cout << "Yes";
    }else{
      cout << "No";
    }
  }
  return 0;
}