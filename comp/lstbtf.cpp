#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,m,x=1,c=0,r,y;
    cin>>n;
      m=n;
      y=n;
      while(y--)
      {
         x *= 10;
         y = y/10;
      }
      while(m>0)
      {
         r= m%10;
         c++;
          sum += r*r;
         m =m/10;
     
      }  
      
      
  }
  return 0;
}
