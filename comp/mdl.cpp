#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void func(int *a,int n,int *b)
{
   int max=a[0];
   int min=a[0];    
   int u,v;
    for(int i=0;i<n;i++)
    {
         if(a[i] > max)
          {
           max = a[i];
           u=i;
          }
         if(a[i] < min)
         {
          min = a[i]; 
          v = i;
         }
    }
    if(u > v)
     cout << min <<" "<< max <<endl;
    else
     cout << max << " "<<min<<endl;   
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
      int n;
      cin>>n;
      int m;
      int a[20];
       for(int i=0;i<n;i++)
          cin>>a[i];
      int b[n]={0};
       int c;
       int u=0;
     
        func(a,n,b);
      
   } 
   return 0;
}   
