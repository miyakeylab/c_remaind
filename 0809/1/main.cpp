#include <bits/stdc++.h>
using namespace std;

long double a[200010];
bool check[200010];

int main() {
    int n = 0;
    cin >> n;

    for (int i=0; i < n;i++)
    {
      cin >> a[i];
    }
    int dCount = 0;
    for (int k=0; k < n;k++)
    {
      for (int s = k + 1; s < n; s++)
      {
        if(a[k] == a[s]){
          dCount++;
        }
      }
    }
    int count = 0;

    for (int k=0; k < n;k++)
    {
      for (int s = k + 1; s < n; s++)
      {

          if(std::floor(a[k]) == a[k] &&
            std::floor(a[s]) == a[s] ){

            count++;
 
          }else{
            long double data = a[k] * a[s];

            if(std::floor(data) == data){
              count++;

            }
          }
      }
    }


    cout << count - dCount;

    return 0;
}