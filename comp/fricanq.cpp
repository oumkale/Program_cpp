#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   cout<<"Test Cases"<<endl;
   int t;
   cin>>t;
   while(t--)
   { 
     long long int n,m,count=0;
     long long int b[1000001],k,kk,L,R;
     long long int a[1000001], l[1000001], r[1000001];
     cin>>n>>m;
     for(long long int i=1;i<=m;i++)
         cin>>a[i];
     cout<<"------"<<endl;    
     for(long long int i=1;i<=m;i++)  
       cin>>l[i]>>r[i];
     cout<<"------"<<endl;  
    /* for(long long int i=1;i<=m;i++)
     {  cout<<"------"<<endl;
        L = l[i];
        R = r[i];
        k=1;
        kk=R;
         while((k <= L) && (1 <= i <= L))
         {
          if(b[k]>=1)
           continue;
          else
          { 
            b[k]=1;
            count++;
            break;
          }
          k++;
         }
         while((kk >= 1) && (m >= i >= R))
         {
          if(b[kk]>=1)
           continue;
          else
          { 
            b[kk]=1;
            count++;
            break;
          }
           kk--;
         }
     }    */
         cout<<count<<endl;
   }
   return 0;
} 

