#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int maxXORInRange(int L, int R) 
{ 
    // get xor of limits 
    int LXR = L | R; 
  
    //  loop to get msb position of L^R 
    int msbPos = 0; 
    while (LXR) 
    { 
        msbPos++; 
        LXR >>= 1; 
    } 
  
    // construct result by adding 1, 
    // msbPos times 
    int maxXOR = 0; 
    int two = 1; 
    while (msbPos--) 
    { 
        maxXOR += two; 
        two <<= 1; 
    } 
  
    return maxXOR; 
} 
int main()
{
  // cout<<(4 | 5)<<endl;
   int t;
   cin>>t;
   
   while(t--)
   { 
       long long int l,r;
       cin>>l>>r;
       long long int max = maxXORInRange(l,r);
       cout << max <<endl;
   }
   return 0;
}   
