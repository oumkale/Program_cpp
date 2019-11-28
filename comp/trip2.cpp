#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
      long long int n,j=0,c1=0,c2=0,k,u=0,p1,p2=0,m,v;
      long long int a[1001][1001]={0},b[1001]={0},c[1001][1001];
      cin>>n>>m;
       v =(n*m-1);
       cout<<v<<endl;
    for(k=0;k<=v;k++)  
    {
      c2=0;
      b[m*n] = {0};
      for(long long int i=1;i<=n*m;i++)
      {
        //c1++;
         
       i += k;
        b[u++]=i;
       //cout<<i<<" ";
       
       
     }
     for(long long int j=1;j<=n*m;j++)
        {
        
         b[p2++]=j;
          j += k;
         //cout<<i<<" ";
         }
        for(long long int j=1;j<=n*m ;j++)
        if(b[j-1] > 0)
           c2++;
   
       cout<<c2;
    // cout<<c1<<" ";
    } 
       
    
   }
   return 0;
} 

