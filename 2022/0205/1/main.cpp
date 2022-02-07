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
  ll n;

  cin >> n;
  ll n2 = 1;
  for(int i = 0; i < n;i++){
    n2 *= 2;

  }
  if( n2 > n*n){
    cout << "Yes"; 
  }else{

    cout << "No";
  }
  return 0;
}