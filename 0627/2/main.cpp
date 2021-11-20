#include <bits/stdc++.h>
using namespace std;


int main() {
    long long x;
    int count;
    int num;
    cin >> count;
　　std::vector<long long> v;

    for(int i = 0; i < count; i++ )
    {
        cin >> num;

        if(num  == 1){
            cin >> x;
            v.push_back(x);

        }else if(num  == 2){
            cout << v[0] << endl;
            v.erase(v.begin());
        }else{
            sort(v.begin(), v.end());
        }

    }



    return 0;
}