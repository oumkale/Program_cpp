#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   { 
       long long int n,i,j,p=0,q=0;
       cin>>n;
       long long int a[100001],b[100001],c[10001]={0};
       a[0]=b[0]=0;

       for(i=1;i<=n;i++)
          cin>>a[i];
       for(i=1;i<=n;i++)
          cin>>b[i];
       
       for(i=1;i<=n;i++)
       {
         p = i - a[i]+1;
         q = i + a[i];
           for(j=p;j<=q;j++)
           {
             if(j>n)
                break; 
             c[j] +=1;
           }   
       }
       long long int count=0;
       cout<<"c[n/2]"<<c[n/2]<<endl;      
      for(i=1;i<=n;i++)
      {
        j=1;  
        while(j<=n)
        {
          if(b[i]==c[j])
           {
             b[i] = 9;
             break;
           }
           j++;
        }
      }
      sort(c+1,c+n+1);
      for(i=1;i<=n;i++)
      {
        if(b[i] == 9)
         count++;
      }
      for(i=1;i<=n;i++)
        cout<<c[i]<<" ";

       if(count==n)
         cout<<"YES"<<endl;
       else
         cout<<"NO"<<endl;         
   } 
   return 0;
}   
