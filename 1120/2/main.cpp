#include <bits/stdc++.h>
using namespace std;
 
int a[100001];
int vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}
int main() {
  int n;
  int x;
  int count = 1;
  std::vector<int> data;
  cin >> n;
  cin >> x;

  for (int i=0; i < n;i++)
  {
      cin >> a[i];
  }
  bool loop = true;
  data.push_back(x);
  while (loop)
  {
    if(a[x-1] != x){
      if(vector_finder(data, a[x-1]) == 0){
      data.push_back(a[x-1]);
      count++;
      if(count == n ){
        loop = false;
        break;
      }
      x = a[x-1];
      }else{
        loop = false;
        break;
      }
    }else{
        loop = false;
        break;
    }
  }
  
  cout << count;
  
  return 0;

}
