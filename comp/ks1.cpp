#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
   int t;
   cin>>t;
   //cout<<(2^5)<<endl;
   while(t--)
   { 
       long long int n,a[100002],k=0,count=0,m=0,p=0;
       cin>>n;
       for(long long int i=0;i<n;i++)
         cin>>a[i];
       
       for(long long int i=0;i<n;i++)
       {
           m ^= a[i];
           
           p=0;
          for(long long int j=i+1;j<n && i!=j;j++)
          {
             p ^=m;
                 if(m == p)
                    count++;
          }
       }  
       cout<<count<<endl;
         
   }  
   return 0;
}   
