#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

// 比較関数
bool my_compare(pair<int, string> a, pair<int, string> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
        // return a.first < b.first; // 昇順
        return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}

signed main()
{
    vector<pair<long, long> > vp;
    long n;
    long w;
    cin >> n;
    cin >> w;
    for (int i = 0; i < n; i++)
    {
        long a;
        long b;
        cin >> a;
        cin >> b;
        vp.push_back( pair( a, b) );
    }
  sort(all(vp), greater<pll>());
  long long max = 0;
  for(pll x: vp){
    long ww = 0;

    if(x.ss >= w){
        ww = w;
        max += x.ff * ww;
        break;
    }else{
        ww = x.ss;
        max += x.ff * ww;
        w -= ww;
    }
  }

  cout << max;

    return 0;
}