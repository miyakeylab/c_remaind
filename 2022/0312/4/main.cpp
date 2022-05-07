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
	cin >> n;
	vector<int> a;
	vector<int> a_add;
	vector<int> res;
  int pre_b = -1;

	for(int i =0;i < n;i++){   
    int b;
    cin >> b;
    a.push_back(b);
  }

	for(int i =0;i < n;i++){
    int b,b2;
    b = a[i];

    b2 = a[i + 1];

    if(a_add.size() > 0){
      cout << "i:" << i << endl;
      if(b != b2){
        bool flg = true;
        while(flg){
          cout << "while:" << endl;
          if(a.size() > 1){
           int p = a[a.size() - 2];
           cout << "pre_b:" << pre_b << endl;
           cout << "p:" << p << endl<< endl;
            if(p == pre_b){
              a_add.pop_back();
            }else{
              flg = false;  
            }
          }else{
            flg = false;
          }
        }
      }
    }
    a_add.push_back(b);
    res.push_back(a_add.size());
	}

  for (const auto &item : res) {
      cout << item << endl;
  }
  
}