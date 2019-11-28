#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool ifRec(long long int a[],long long int u,long long int i)
{
   long long int rev_num = 0;
    long long int c=0;
    long long int num = a[i];
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10;
        c++;
         
    } 
    if(c==1)
      return true;
    for(long long int j=0;j<u;j++)
    {
       if(a[i] == rev_num)
         return true;
         
    }
    return false;
}
int main()
{
   int t;
   cin>>t;
   long long int m = 1000000000 + 7;
   while(t--)
   { 
     long long int n;
     int k;
     cin>>n>>k;
     
      long long int p = pow(10,n);
      long long int inc=0;
      long long int u=0;
      long long int v=0;
      long long int a[p],b[p],c[p];
      for(long long int i=0;i<p;i++)
      {
        a[i] = inc;
        inc++;
        if(a[i] % k == 0)
         b[u++] = a[i];
         
      }
    /*
      for(long long int i=0;i<p;i++)
        cout<<a[i]<<" ";
       cout<<endl;
       
       for(long long int i=0;i<u;i++)
        cout<<b[i]<<" ";
       cout<<endl;
       
      */  
       c[v++] = 0;
         for(long long int i=1;i<u;i++)
         {
           if(ifRec(b,u,i))
             c[v++] = b[i];          
           
         }
         
   /*    for(long long int i=0;i<v;i++)
        cout<<c[i]<<" ";
       cout<<endl;
     */  
        cout<<v%m<<endl; 
         
   } 
   return 0;
}   
