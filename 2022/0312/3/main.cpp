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
  int n;

  vector< int > vx;
  vector< int > vy;
  string s;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    vx.push_back(x);
    vy.push_back(y);
  }
  cin >> s;

  // sort(all(vp), greater<pair<int, int>>());
  int i = 0;
  bool flg = false;

  for (int i = 0; i < n; i++)
  {
    //cout << pp.ff << " " << pp.ss << " " << s[i] << endl;
    int p = 0;
    for (pair<int, int> qq : vp)
    {
      if(p > i){
        // 横軸一致
        if(pp.ss == qq.ss){
          if(pp.ff < qq.ff && s[i] == 'R' && s[p] == 'L'){
            flg = true;
            break;
          }else if(s[i] == 'L' && s[p] == 'R'){
            flg = true;
            break;
          }
        }
      }
      p++;
    }
    i++;
  }

  if(flg == true){
    cout << "Yes";
  }else{
    cout << "No";
  }
  return 0;
}