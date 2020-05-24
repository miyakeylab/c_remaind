#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,h,m;
    
    cin >> a;
    cin >> b;
    cin >> h;
    cin >> m;
    // a = 12;
    // b = 12;
    // h = 10;
    // m = 50;
    long double rtn = 0;

    long double  hd = h * 30 + m * 0.5;
    long double  md = m * 6;
    // printf("%d\n", hd);
    // printf("%d\n", md);

    if(hd == md){
        rtn = 0;
    }else{
        long double  dd = 0.0;
        if (hd > md)
        {
            dd = hd - md;
            // printf("%d\n", dd);
        }
        else
        {
            dd = md - hd;
            // printf("%d\n", dd);
        }
        long double radian = dd * 3.14159265358979323846264338327950L / 180.0;

        rtn = (long double)(a * a + b * b) - (long double)(2 * a * b) * cosl(radian);
    }

    printf("%20.20Lf\n", sqrtl(rtn));

    return 0;
}