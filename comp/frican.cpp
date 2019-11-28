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
     long long int a[11], l[11], r[11]={0}, b[11]={0},k,kk,L,R,p;
     cin>>n>>m;
     for(long long int i=1;i<=n;i++)
         cin>>a[i];
     cout<<"------"<<endl;    
     for(long long int i=1;i<=m;i++)  
       cin>>l[i]>>r[i];
     cout<<"------m "<<m<<endl;  
     for(long long int i=1;i<=m;i++)
     {    cout<<"Count :"<<count<<endl;
          cout<<"------"<<i<<endl;
         L = l[i];
         R = r[i];
         k=1;
         kk=n;
         p=count;
          while(k <= L)
          {
             if(b[k]==0)
             {
                cout<<"Taken L"<<endl;
               b[k]=1;
               count++;
               k++;
               break;
            }   
             else
             { 
               k++;
             }
            
         }
         if(p!=count)
            continue;
         p=count;   
         while(kk > n-R)
         {
             if(b[kk]==0)
              {
                 cout<<"Taken R"<<endl;
                b[kk]=1;
                count++;
                kk--;
                break;
              } 
             else
             { 
               kk--   ;
             }
             
         }
         if(p!=count)
            continue;
        
     }    
         cout<<count<<endl;
   }
   return 0;
} 

