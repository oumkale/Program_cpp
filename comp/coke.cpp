#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include <limits>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   { 
       int k,n,m,l,r,t,temp,ind=0,count=0,kk=0;
       int c[101],b[101];
       long long int p[101];
       cin>>n>>m>>k>>l>>r;
       for(int i=0;i<n;i++)
       {
         cin>>c[i]>>p[i];
       }
        
       for(int i=0;i<n;i++)
       {
           t = c[i];
           if(t > k + 1)
            {
             if(m>=1)
             temp = t -m;
              
            }
            else if(t < k - 1)
            {
             if(m>=1)
             temp = t + m;
             
            } 
            else 
            {
              if(m>=1)
              {
                temp =  k;
              }
            } 
           b[i] = temp;
          cout<<kk++<<"  "<<b[i]<<endl;
       }    
       int min;
        int uu=0;
       
       for(int i=0;i<n;i++)
       {
        //  cout<<l<<" "<<b[i]<<r<<" "<<endl;
         if(l <= b[i] && b[i] <= r)
         { 
          //  cout<< " -----" <<endl;
            if(uu==0)
             { min = p[i]; uu++; }
            else if(min > p[i])
            {
              min = p[i];
              ind = i;
             // cout<<min<<endl;
            }
            
          }
          else
             count++;
       }
       if(count==n)
         cout<<(-1)<<endl;
       else
         cout<<min<<endl;
            
   }
   return 0;
} 

