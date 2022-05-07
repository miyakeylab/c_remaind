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
  int a,b,c,d;
  string s;
  cin >> a >> b >> c >> d;

  if(a > c){
    cout << "Aoki";
  }else if(c > a){
    cout << "Takahashi";
  }else if(c == a){
    if(b > d){
    cout << "Aoki";

    }else if(d > b){
    cout << "Takahashi";

    }else {
      cout << "Takahashi";
    }
  }



  return 0;
}