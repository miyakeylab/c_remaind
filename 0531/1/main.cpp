#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    
    cin >> n;
    long n2[n]; 
    
    for(int i = 0; i < n;i++ )
    {
    	cin >> n2[i];
    }
  
    long n3 = 0;
  
    for(int p = 0; p < n;p++ )
    {
      if(p == 0)
      {
        n3 = n2[p];
      }else{
    	n3 = n3 * n2[p];
      }
    }
 
    long rtn;
    if(n3 > 1000000000000000000 )
    {
      rtn = -1;
    }else{
      rtn = n3;
    }
  
    cout << rtn;

    return 0;

}