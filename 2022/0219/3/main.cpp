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
  long long x1,y1,x2,y2;
  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  if(
    ((x1 -2)*(x1 -2)) + ((y1 -1) * (y1 -1)) == 5 &&
    ((x2 -2)*(x2 -2)) + ((y2 -1) * (y2 -1)) == 5 
  ){
    cout << "Yes";
    return 0;

  }

  if(
    ((x1 -1)*(x1 -1)) + ((y1 -2) * (y1 -2)) == 5 &&
    ((x2 -1)*(x2 -1)) + ((y2 -2) * (y2 -2)) == 5 
  ){
    cout << "Yes";
    return 0;

  }

  if(
    ((x1 +1)*(x1 +1)) + ((y1 -2) * (y1 -2)) == 5 &&
    ((x2 +1)*(x2 +1)) + ((y2 -2) * (y2 -2)) == 5 
  ){
    cout << "Yes";
    return 0;

  }


  cout << "No";
  
  return 0;
}