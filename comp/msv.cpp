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
      long long int n,sum=0,count=0;
      long long int a[100001]; 
      cin>>n;
      long long int p,q;
      for(long long int i=0;i<n;i++)
      {
      
         cin>>a[i];
         if(i == 0)
         {
           p = a[0];
           q = a[0];
         }
         if(a[i]%2==0 && p > a[i])
         {
            p = a[i];
         }
         if(a[i]%2==1 && q > a[i])
         {
            q = a[i];
         }  
      }
      cout<<"Odd :"<<q<<" Even :"<<p<<endl;
      for(long long int i=0;i<n;i++)
      {
        count=0;
        for(long long int j=i-1;j>=0;j--)
        {
           if(a[j] % a[i] == 0)
            {
                count++;
            }
        }
        if(count>=sum)
              sum = count;
        
      }
      cout<<sum<<endl;
   } 
   return 0;
}   
