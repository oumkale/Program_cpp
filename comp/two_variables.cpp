#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
     long int i,x=0,y=0,p,X,count=0;
     cin>>x;
     for(i=1;i<=x;i++)
     {
        if( i*i > y)
          {
            x=i;
            y += i*i;
            count++;
          }   
     }
      cout<<count<<endl;
   }
   return 0;
}
