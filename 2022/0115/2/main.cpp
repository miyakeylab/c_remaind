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
  long long res = 0;
  long long high = 0;
  for(int i = 0; i<n;i++){
    cin >> res;
    if(res > high){
      high = res;
    }
  }
  cout << high;
  return 0;

}