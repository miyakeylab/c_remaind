#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  long long a;
  long long b;
  long long p;
  long long q;
  long long r;
  long long s;
  cin>>n;
  cin>>a;
  cin>>b;
  cin>>p;
  cin>>q;
  cin>>r;
  cin>>s;

    long long min1_x =0;
    long long min1_y =0;

        min1_x = 1-a;
        min1_y = 1-b;
    long long max1_x =0;
    long long max1_y =0;

        max1_x = n -a;
        max1_y = n -b;

    long long min2_x =0;
    long long min2_y =0;

        min2_x = 1-a;
        min2_y = b -n;
    long long max2_x =0;
    long long max2_y =0;

        max2_x = n - a;
        max2_y = b -1;
// cout << min1 << endl;
// cout << max1 << endl;
// cout << min2 << endl;
// cout << max2 << endl;
// cout << min1 + a  << endl;
// cout << max1 + a << endl;
// cout << min1 + b << endl;
// cout << max1 + b << endl;
// cout << min2 + a  << endl;
// cout << max2 + a << endl;
// cout << b - min2  << endl;
// cout << b - max2 << endl;
    long long loop1 = q - p +  1;
    long long loop2 = s - r + 1;
    long long k1 = min1_x;
    long long k2 = min1_y;
    long long k3 = min2_x;
    long long k4 = min2_y;

    for(long long i = 1; i <= loop1; i++){
        string len = "";
        for(long long n = 1; n <= loop2; n++){
            if((i >= min1_x  &&  i <=  max1_x) && 
            (n >=  min1_y &&   n <=  max1_y))
            {
                    if(i  == a + k1  && n == b + k2 ){
                        len += "#";
                        k1++;
                        k2++;
                        if(i  == a + k3  && n == b - k4 ){
                            k3++;
                            k4++;
                        }
                    }else{
                    len += ".";
                    }
            }else{
                if((i >= min2_x  &&  i <=  max2_x) && 
                (n >=  min2_y &&   n <=  max2_y))
                {      
                    if(i  == a + k3  && n == b - k4 ){
                        len += "#";
                        k3++;
                        k4++;
                    }else{
                        len += ".";
                    }
                }else{
                    len += ".";
                }
            }

        }
        cout << len << endl;

    }

}
