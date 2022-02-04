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
  vector<vector<ll>> data((2*n), vector<ll>(2*n));
  for(int k = 1; k < (2*n); k++){
      cout << "index:"<<k<< endl;
    for (int i = k; i < (2*n); i++){
      cout << "index:"<<k << "," << i<< endl; 
        cin >> data.at(k).at(i);
      cout << data[k][i] << endl;
    }
  }


  cout << data[1][2]^data[3][4] << endl;
  return 0;

}