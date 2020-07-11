#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  int bit;
  int count;
  cin >> n;
  cin >> bit;


  for (int i = 1; i <= n;i++){
    count = 0;

    if(i > 3){
      a = 1;
      b = 1;
      c = 1;
      int p = 0;
      for (int n = 1; n < 100; n++)
      {
        p = 0;
        for (int l = 1; l < 100; l++)
        {
          p = 0;
          for (int m = 1; m < 100; m++)
          {

            p = (n * n) + (l * l) + (m * m) + (n * l) + (l * m) + (m * n);
            if (p == i)
            {
              count++;
            }
            else if (p > i)
            {
              if(m == 1){
                p = -1;
              }
              break;
            }
          }
          if(p == -1){
              if(l == 1){
                p = -2;
              }
              break;
          }
        }
        if(p == -2){
          break;
        }
      }
    }

    cout << count << std::endl;
  }

  
  return 0;

}