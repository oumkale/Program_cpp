#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
void moves(int r, int c, int k,int u)
{
     int l=0,h=0;
   
     for(int i=1;i<=8;i++)
           {
            for(int j=1;j<=8;j++)
            {
              if((i-r)*(i-r) + (j-c)*(j-c) <= u)
              {
                  l++;
              
              } 
            }
          }
          
           cout<<l<<endl;
          // else
          //cout<<l+1<<endl;
}
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
       int r,c,k,l=0,m=0,u;
       cin>>r>>c>>k;
       m=k+1;
       if(k==1)
        u=2;
        else 
        {
          u = 2*(k*k);
        }
  
       switch(k)
       {
         case 1:
         
         moves(r,c,k,u);
         break;
         case 2:
      
         moves(r,c,k,u);
         break;
         case 3:
     
         moves(r,c,k,u);
         break;
         case 4:
   
         moves(r,c,k,u);
         break;
         case 5:
       
         moves(r,c,k,u);
         break;
         case 6:
       
         moves(r,c,k,u);
         break;
         case 7:
      
         moves(r,c,k,u);
         break;
         case 8:
      
         moves(r,c,k,u);
         break;
         default: ;
         break;
       }
      
     
      
   }
}
