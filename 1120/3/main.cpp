#include <bits/stdc++.h>
using namespace std;
vector<int>  p;
int s[100001];
signed main()
{
    int n;
    int k;
    int p1;
    int p2;
    int p3;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> p1;
        cin >> p2;
        cin >> p3;
        p.push_back(p1 + p2 + p3);
        s[i] = p1 + p2 + p3;
    }
  sort(p.begin(), p.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        int rank = 1;
      
        for (int l = 0; l < n; l++){
            if(s[i] + 300 == p[l]){
                continue;
            }
            if(s[i] + 300 < p[l] ){
                rank++;
            }else{
                break;
            }
            if(rank > k ){
                break;
            }
        }

        if(rank <= k ){
            cout<< "Yes" << endl;
        }else{
            cout<< "No" << endl;
        }
    }

    return 0;
}