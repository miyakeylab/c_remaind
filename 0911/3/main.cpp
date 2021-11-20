#include<bits/stdc++.h>
using namespace std;

int s[201][201];
int t[201][201];
int sCount = 0;
int tCount = 0;
signed main(){
    int n;
    cin>>n;

    
    for(int i = 0; i < 2;i++ )
    {
         for(int q = 0; q < n;q++ )
         {
            if(i == 0){
                for(int p = 0; p < n;p++ ){
                cin >> s[p];
                if(s[p] == "#"){
                    sCount++;
                }
                }
            }
            else{
                for(int p = 0; p < n;p++ ){
                cin >> t[p];
                if(t[p] == "#"){
                    tCount++;
                }
                }
            }
         }
    }


    cout<<sCount<<endl;

    cout<<tCount<<endl;
    return 0;
}