#include <bits/stdc++.h>
using namespace std;
// int s[100001];
signed main()
{
    int n;
    int p;
        cin >> n;
        cin >> p;
    int s = 0;
    int ret = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if(s < p){
            ret++;
        }
    }
    cout<< ret;
}