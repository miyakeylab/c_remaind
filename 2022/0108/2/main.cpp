#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using std::cout; using std::endl;
using std::vector; using std::copy;


 double calculateDistance(std::pair< double,  double> &x, std::pair< double,  double> &y)
{
    return ( double)sqrt(( double)pow(x.first - y.first, 2) +
                ( double)pow(x.second - y.second, 2));
}

signed main() {
  
  int n;
  vector<std::pair< double,  double>> vec;
   double x;
   double y;
  cin>>n; 
   double rtn = 0;
 // n = 1;
  
  for(int i = 0; i < n; i++ ){
    cin >> x;
    cin >> y;
    vec.push_back({x, y});
    
  }
  for(int i=0; i<n; i++){

    for(int p=i + 1 ; p < n; p++){
       double data =  calculateDistance(vec[i], vec[p]);

      if(rtn < data){
        rtn = data;
      }
    }
    
    }

      cout << rtn;
    return 0;
}