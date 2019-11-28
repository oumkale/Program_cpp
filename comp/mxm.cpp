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
      long int n,k;
      cin>>n>>k;
      int A[1001],b[1001],c[1001]={0};
      for(long int i=0;i<n;i++)
      {
        cin>>A[i];
        b[i] = pow(k,A[i]);
      }
      long int p=0,q=0,max=0,u=0;
     // for(long int i=0;i<n;i++)
     //   cout<<b[i]<<" ";
     // cout<<endl; 
     for(long int i=0;i<n;i++)
       {
          p += b[i]; 
          
          for(long int j=i+1;j<n;j++)
          {
             q += b[j];  
          }  
         // cout<<p<<" "<<q<<endl; 
          if(p*q > max)
            max = p*q;
          q=0;
       }
       
      cout<<max<<endl;
   }
   return 0;
} 
/*

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
      long int n,k;
      cin>>n>>k;
      int A[1001],b[1001],c[1001]={0};
      for(long int i=0;i<n;i++)
      {
        cin>>A[i];
        b[i] = pow(k,A[i]);
      }
      long int p=0,q=0,max=0,u=0;
     // for(long int i=0;i<n;i++)
       // cout<<b[i]<<" ";
     // cout<<endl; 
     for(long int i=0;i<n;i++)
       {
          p += b[i]; 
          
          for(long int j=i+1;j<n;j++)
          {
             q += b[j];  
          }  
        //  cout<<p<<" "<<q<<endl; 
          if(p*q > max)
            max = p*q;
          q=0;
       }
       
      cout<<max<<endl;
   }
   return 0;
} 

*/
