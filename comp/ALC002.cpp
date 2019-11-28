#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void func(long long int a[],long long int n, long long int k)
{
   long long int sum=0,u=0,count=0,b[100001],h=0;
    for(long long int i=0;i<n;i=i+k)
        {
          if(abs(n-i) < k)
          {
            for(long long int j=i;j<n;j++)
               b[u++] = a[j];
               break;
          }
          h += k;
          sum =0;
          for(long long int j=i;j<h && j<n;j++)
          {
             sum += a[j];
            // cout<<" a :"<<a[j];
          
             count++;
          }
          // cout<<endl;
          b[u++] = sum;
          
           
        }
        //for(long long int i=0;i<u;i++)
     //        cout<<b[i]<<" ";
        // cout<<endl;

       // cout<<" u "<<u<<endl;
        n=u;
        sum=0;
        //if(k == u)
        //{
          //for(long long int i=0;i<u;i++)
            // func(b,n,k); 
            //sum += b[i];
            //cout<<sum<<endl;
             //return ;
        //}
        if(u < k)
         {
             for(long long int i=0;i<u;i++)
               cout<<b[i]<<" ";
                return ;
         }
         else
            func(b,n,k);

}
int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
       long long int n,k,sum=0,u=0,count=0;
       cin>>n>>k;
       long long int a[100001];
       for(long long int i=0;i<n;i++)
        {
        
           cin>>a[i];
           // sum += a[i];
        }
         func(a,n,k);
        //cout<<sum<<endl;
          
   }
   return 0;
} 

