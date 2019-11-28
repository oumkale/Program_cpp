#include <iostream>
#include <cmath>
using namespace std;
int see_date(int y,int m, int d)
{
   int count=0;
   if(y%4 == 0 && y!=1900)
   {
      if(m==1 || m==2 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
      count++;
      if(count!=0)
      {
        if(m==2)
         return (29-d)/2;
        else
         return (31-d)/2; 
      }
      else
       return (61-d)/2;
   }
   else
   {
     
      if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
      count++;
      if(count!=0)
      {
         return (31-d)/2;  
      }
      else
      {
         if(m==2)
          return (59-d)/2;
         else
          return (61-d)/2; 
      }
   }
   
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int y,m,d;
        string s;
        cin>>s;
        y = (1000*(s[0]-48)) + (100*(s[1]-48)) + (10*(s[2]-48))+((s[3]-48)); 
        m = (10*(s[5]-48))+((s[6]-48));
        d = (10*(s[8]-48))+((s[9]-48));
       int days = see_date(y,m,d);
       cout<<days+1<<endl;
    }
}	
