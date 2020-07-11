#include <bits/stdc++.h>
using namespace std;
 
int a[110];

int main() {
  int n;
  int count = 0;
  
  cin >> n;

    for (int i=0; i < n;i++)
    {
        cin >> a[i];
    }
  for (int i = 0; i < n;i++){
    if((a[i] % 2) != 0 ){
      count++;
    }
  }

    cout << count;
  
  return 0;

}