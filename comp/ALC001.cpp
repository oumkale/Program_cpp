#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void func(char a[],int b[],int n,int m)
{
    int k=0,sum=0,u=0,count=1,j=0,i=0;
        for(int i=0;i<n;i=k+1)
       {
           if(a[i] == '+')
           {
 
              cout<<b[i]<<" ";
              j=i+1;
              
              while(j < n)
              {
                if(a[j] != '+')
                   j++;
                if(a[j] == '+')   
                 {
                   cout<<b[j]<<" ";
                    k=j;
                   break;
                 }  
              }

              j=i;
              
              for(int l=k-1;l>j;l--)
             {
                 cout<<b[l]<<" ";
             }
              //cout<<" k "<<k<<" j "<<j<<endl;
               
           }  
         
          
        }
}
int main()
{
   
       int n,k,sum=0,u=0,count=1;
       cin>>n;
       char a[1002];
       int b[1002];
       for(int i=0;i<n;i++)
          cin>>a[i];
       
       for(int i=0;i<n;i++)
          cout<<a[i]<<" ";
       cout<<endl;
       for(int i=0;i<=n;i++)
        {
          b[i]=count;
           count++;
        }    
        for(int i=0;i<=n;i++)
          cout<<b[i]<<" ";
        cout<<endl;
      func(a,b,n,n+1); 
        
   
   return 0;
} 

