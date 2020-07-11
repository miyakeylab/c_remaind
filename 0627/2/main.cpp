#include <bits/stdc++.h>
using namespace std;

char a[200000],b[200000];

int main() {
    long long count = 0;
    cin >> a;
    cin >> b;
    
    long long i = 0;
    while (a[i] != '\0')
    {
        if(a[i] != b[i])
        {
            count++;
        }
        i++;
    }
    cout << count;

    return 0;
}