#include<iostream>
#include<math.h>
#include <algorithm>
#include <string>
using namespace std;

string binary(long long bina){
    string ans = "";
    for (int i = 0; bina>0 ; i++)
    {
        long long res =(bina%2);
        if(res == 0){
          ans+= "0";
        }else{
          ans+= "2";
        }
        
        bina = bina/2;
    }
    return ans;
}

int main(){
    long long number;
    cin>>number;
    string res = binary(number);
    reverse(res.begin(), res.end());
    cout<<res<<endl;
}