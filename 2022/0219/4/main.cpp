#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

signed main()
{
  int a,b,c,d;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  for(int n = a;n <= b;n++){
    // cout << "a:"<< n << endl;
    bool flg =false;
    for(int s = c;s <= d;s++){
      // cout << "c:" << s << endl;
      if(IsPrime(n + s)){
        // cout << "true" << endl;
        flg = true;
        break;
      }
    }
    if(flg == false){
      cout <<  "Takahashi";
      return 0;
    }
  }
  
  cout << "Aoki";
  
  
  return 0;
}