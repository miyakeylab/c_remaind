#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

signed main()
{
    int n;
    int k;
    int now;
    vector<int> vec;
    cin >> n;
    cin >> k;
    int pre = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> now;
        vec.push_back(now);
        if (i >= n - 1)
        {
            std::sort(vec.begin(), vec.end(), std::greater<int>());
            cout << vec[n - 1];
        }
    }
    return 0;
}