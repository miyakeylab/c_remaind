#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
using pll = pair<long, long>;
using psi = pair<string, int>;
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ll long long



signed main()
{
    vector<long long > vp;
    long n;
    long q;
    cin >> n;
    cin >> q;
     long long a = 0;
     long long centor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vp.push_back(a);
    }
  sort(all(vp), greater<long long >());
    std::vector<long long> numbers;
    std::vector<long long> numbers2;
    std::vector<long long> numbersMax;
    long counter  = 0;
    bool flag = true;
    for(long long x: vp){
        numbers.push_back(x);
        if(n / 2 < counter ){
            if(flag == true){
                centor = x;
                flag = false;
            }
            numbers2.push_back(x);
        }else{
            numbers.push_back(x);
        }
        numbersMax.push_back(x);
        counter++;
    }
  long long max = 0;
  long long s = 0;
  for (int i = 0; i < q; i++)
    {
        max = 0;
        cin >> s;

        if(s > centor ){
            auto it = find_if(numbers.begin(), numbers.end(), [&](long long n) { return n < s; });
            if (it == numbers.end()) // itLast と同じなら見つからなかったということ
            {
                cout << numbersMax.size() << endl;
            }
            else
            {
                // std::distance で 2 つの位置の距離を計算
                cout <<  std::distance(numbers.begin(), it) << endl;;
            }
        }else{
            auto it = find_if(numbers2.begin(), numbers2.end(), [&](long long n) { return n < s; });
            if (it == numbers2.end()) // itLast と同じなら見つからなかったということ
            {
                cout << numbersMax.size() << endl;
            }
            else
            {
                // std::distance で 2 つの位置の距離を計算
                cout <<  std::distance(numbers2.begin(), it) << endl;;
            }
        }
    }


    return 0;
  }