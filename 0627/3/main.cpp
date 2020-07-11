#include <bits/stdc++.h>
using namespace std;

long long a[200010],b[200010];
int n;
int m;
long long k;
int main()
{
    cin >> n;
    cin >> m;
    cin >> k;

    for (int i=0; i < n;i++)
    {
        cin >> a[i];
    }

    for (int i=0; i < m;i++)
    {
        cin >> b[i];
    }
    
   // aのみ
  int countA = 0;
  long long timeA = 0;
  for (int i=0; i < n;i++)
  {   
      timeA += a[i];
      if(timeA > k){
          break;
        }
        countA++;
    }
    
    int countB = 0;
    long long timeB = 0;
    for (int i=0; i < m;i++)
    {   
        timeB += b[i];
        if(timeB > k){
          break;
        }
        countB++;
    }
  
  int countAA = 0;
  int countBB = 0;
    int countC = 0;
    long long timeC = 0;
    for (int i=0; i < (n+m);i++)
    {   
        if(countAA >= (n)){
          if(countBB >= (m)){
            break;
          }else{
            timeC += b[countBB];
          }
        }else if(countBB >=  (m)){
          
          timeC += a[countAA];
        }else{
          if(a[countAA] >= b[countBB])
          {
            timeC += b[countBB];
          }else{

            timeC += a[countAA];
          }
        }
      
    //  cout << "timeC:";
    //  cout << timeC;
        if(timeC > k){
          break;
        }
                
        if(countAA >= (n)){
          if(countBB >= (m)){
            break;
          }else{
            countBB++;
          }
        }else if(countBB >=  (m)){
          
          countAA++;
        }else{
          if(a[countAA] >= b[countBB])
          {
            countBB++;
          }else{

           countAA++;
          }
        }
      
        countC++;
    }  
    // cout << n;
    // cout << m;
    // cout << k;
    // cout << endl;
    //   cout << timeA;
    //   cout << endl;
    //   cout << countA;
    //  cout << endl;
    //  cout << timeB;
    //  cout << endl;
    //  cout << countB;
    //  cout << endl;
    //  cout << timeC;
    //  cout << endl;
    //  cout << countC;

    if(countC > countA){
      
      if(countC > countB){
        cout << countC;
      }else{
        
        cout << countB;
      }
    }else if(countA > countB){
        cout << countA;
    }else{
        cout << countB;
      
    }
    return 0;
}