#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
   
       
       long long int n,m,h,r,i=0,j=10,p=0;
       cin>>n;
       m = n;
       if(n >= 20)
       {
         m = n;
          while(m>0 && m%10==0)
          {
             if(m<=200)
                break;
             //  cout<<"1 =>"<<endl; 
             r = m%10;
             if(r!=0)
              break;         
              m = m/10;
            
          }
            if(m %10==0 && m%20==0)
                 cout<<"Yes"<<endl;
              else
                 cout<< "No"<<endl;
       }
       else
         {
          cout<< "No"<<endl;
            break;   
         }  
             
      }

   return 0;
}   
