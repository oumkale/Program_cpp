#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,x,l,flag=0,count=0,index=0;
       cin>>n;
       int a[129]={0},b[128],u=0;
       a[0]=0;
       a[1]=0;
       a[2]=1;
      if(n==1)
         cout << 1 << endl;
      else if(n==2)
         cout << 2 << endl;
      else if(n==3)
         cout << 1 << endl;
      else
      {     
       for(int i=2;i<n;i++)
       {
          x =a[i]; 
          flag =0;
          count=0;
          u=0;
          for(int j=i-1;j>=0;j--)
          {  
              if(x==a[j])
              {
                 flag=1;
                 b[u++]=j;
                index=j;
                break;
              }
          }
          if(flag==0)
          a[i+1] =0;
          else if(flag ==1)
           a[i+1] = abs(index-i);
       }
      
     /*  for(int i=0;i<n;i++)
       {
            cout << a[i] << " ";
       }
     */count=0;
         x = a[n-1];
         for(int i=0;i<n;i++)
         {
                   if(x == a[i])
                    count++;
         }
         cout <<count <<endl;
      } 
   }
   return 0;
}   

