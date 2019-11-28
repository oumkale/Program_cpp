#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >>t;
   while(t--)
   { 
      long int n;
      cin>>n;
      int p[150];
      
      int a[150],b[150];
      for(int i=0;i<n;i++)
         cin>>a[i];
       for(int i=0;i<n;i++)
         cin>>b[i];
       int g=0,max=0,f=0, point=0;
       for(int i=0;i<n;i++)
       {
         g = a[i]*20;
         f = b[i]*10;
         point = g - f;
         if(point <= 0)
          point =0;
         p[i] = point;       
         if(max < p[i])
           max =p[i];   
       } 
       cout<<max<<endl; 
   } 
   return 0;
}
