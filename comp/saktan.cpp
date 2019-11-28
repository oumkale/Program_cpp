#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int CountingEvenOdd(int *arr, long long int n) 
{ 
    long long int odd_count = 0;              
   
    for(long long int j = 0 ; j < n ; j++)   
    { 
       
        if (arr[j] & 1 == 1) 
            odd_count ++ ;          
    } 
    
       return odd_count;    
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
      long long int n,m,q;
      cin>>n>>m>>q;
      int a[n][m] = {0};
      
      long long int b[q],c[q];
      int d[n*m];
      long long int count=0;
         
      long long int X,Y,l=0,g=0,r,y;
      for(long long int i=0;i<q;i++)
        cin>>b[i]>>c[i];
      X=q;
      while(X--)
      {
         y = c[g]-1;
         r = b[l]-1;
         for(long long int i=0;i<n;i++)
         {
                
              //  cout<<" r "<<r<<endl;
              a[i][y]++;
            //  d[a[i][y]] += 1;
         }
         
         for(long long int j=0;j<m;j++)
         {
               
              // cout<<" y "<<y<<endl;
              a[r][j]++;
             // d[a[r][j]] += 1;
         }
         
         l++;
         g++;
          
      }
      l=0;
      for(long long int i=0;i<n;i++)
       for(long long int j=0;j<m;j++)
          d[l++] = a[i][j];
     
      count = CountingEvenOdd(d,l);
      cout<<count<<endl;
   } 
   return 0;
}   
