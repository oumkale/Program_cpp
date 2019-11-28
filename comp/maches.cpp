#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int find(int r)
{
  if(r == 0)
    return 6;
  else if(r==1)
    return 2;
  else if(r==2)
    return 5;
  else if(r==3)
    return 5;
  else if(r==4)
    return 4;
  else if(r==5)
    return 5;
  else if(r == 6)
    return 6;
  else if(r == 7)
    return 3;
  else if(r == 8)
    return 7;
  else if(r == 9)
    return 6;   
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
         long long int a,b,sum,u,p,r, m=0;
         cin>>a>>b;
         sum = a + b;
         u = sum;
         while(u > 0)
         {
           r = u %10;
           m =m + find(r);
           cout<<m<<" :";
           u = u/10;
         }
         cout<<m<<endl;
   }  
   return 0;
}   
