#include <bits/stdc++.h>
using namespace std;

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int main() {
    int n;
    int k;
    
    cin >> n;
    cin >> k;
    int n2[k]; 
    int n3[k];
    
    for(int i = 0; i < k;i++ )
    {
    	cin >> n2[i];
    }

    std::sort(n2, n2 + SIZE_OF_ARRAY(n2));
    for(int i = 0; i < k;i++ )
    {
    	std::cout << n2[i];
    }
    return 0;
}