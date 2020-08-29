#include <bits/stdc++.h>
using namespace std;


int main() {
    int d = 0;
    int t = 0;
    int s = 0;
    cin >> d;
    cin >> t;
    cin >> s;

    int amari = d % s;
    int wari = d / s;
    string res = "No";

    if(amari == 0){
      if(wari <= t){
        res = "Yes";
      }
    }else{
      if(wari <= t){
        res = "Yes";
      }
    }

    cout << res;

    return 0;
}