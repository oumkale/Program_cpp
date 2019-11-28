#include <iostream>
#include <cmath>
long int a[100001]={0}; 
using namespace std;
int main()
{
   int t;
   long long int x,y,a,b;
   cin>>t;
   
   while(t--)
   {
       long long int i, n,sum, count=0;
       cin>>n;
       int m=0;
       for(i = 1; i <= n; i++)
       {
          cin>>x;
          cin>>y;
          sum = x*x + y*y ;
          if(sum == 5)
            count++;
       }
   }
}
