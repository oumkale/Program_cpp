#include <iostream>
#include <bits/stdc++.h> 
#include <cmath>
using namespace std;
void find(int a[], int n,float mean)
{
    int small,i=0,sum,t=0,count;

    float m;
    
    int b[n];
    for(i=0;i<n;i++)
     {
        sum=0;
        count=0;
       for(int l=0;l<n;l++)  
      		  {
      		       
                    if(l==i)
                     continue;
                      
                       sum+=a[l];
                       count=count+1;  
                          
                }
       
              m=float(sum)/(count);
              if(m==mean) 
                {b[t]=a[i]; t=t+1;}

       }
         if(t>0)
           {
             small=b[0];
             for(int l=0;l<t;l++)  
      		  {
                  if(small>b[l])
                   small=b[l];
              }
            cout<<small<<endl;
           } 
         else
            cout<<"Impossible"<<endl;
}
int main()
{
  int n;
  int t;
  float mean;
  cin>>t;
  while(t>0)
  {
      
      cin>>n;
      int a[n];
      int sum=0;
     
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=a[i];
      
      }
       mean = float(sum)/(n);
       find(a,n,mean);  
     t=t-1;
   }
  return 0;  
}
