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
  int x1,x2,x3,x4;
  int y1,y2,y3,y4;
  
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if(y1 ==  y3){
    y4 = y2;
  }else if(y2 == y3){
    y4 = y1;
  }else if (y1 == y2){
    y4 = y3;
  }

  if(x1 ==  x3){
    x4 = x2;
  }else if(x2 == x3){
    x4 = x1;
  }else if(x1 == x2){
    x4 = x3;
  }
  cout << x4 << " " << y4 << endl;
  return 0;
}