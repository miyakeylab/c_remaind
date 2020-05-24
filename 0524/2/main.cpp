#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k;
    string s;

    // k = 10;
    // s = "123456789";
    
    cin >> k;
    cin >> s;

    if(s.size() > k){
        s.substr(0, k) + "...";

    }
    cout << s;

    return 0;

}