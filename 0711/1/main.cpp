#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int l;
  int r;
  int d;
  int count = 0;
  
  cin >> l;
  cin >> r;
  cin >> d;
  for (int i = l; i <= r;i++){
    if((i % d) == 0 ){
      count++;
    }
  }

    cout << count;
  
  return 0;

}