#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
      long long int n,sum=0,count=0,c,m=0;
      long long int a[100001],b[100]={0}; 
      cin>>n;
      for(long long int i=0;i<n;i++)
      {
         
         cin>>a[i];
         c=m;
         //cout<<" b[i] "<<m<<" "<<b[m-1]<<endl;
        count=0;
        while(c--)
        {
           //cout<<" c "<<c<<endl;
           if(b[c] != a[i])
             count++;
           else
              break; 
        }
        //cout<<" count "<<count<<" m "<<m<<endl;
        if(count==m)
          b[m++] = a[i];
          
       } 
        
          
          count = 0;
        /*  for(long long int i=0;i<m;i++)
          {
             cout<<b[i]<<" ";   
          }   
          //cout<<endl;
        */  
          for(long long int i=0;i<m;i++)
          {
              count=0;
            for(long long int j=0;j<m && j!=i ;j++)
            {
              //cout<<" a[j] "<<a[j]<<" ";
              if(b[i]!=1 && b[j]!=1)
              {
                if(b[j]%b[i]==0)
                {
                  //cout<<" a[j] "<<a[j]<<" a[i] "<<a[i]<<" ";
                  count++;
                }
              }
            if(count>=sum)
              sum = count;
            
            }
            //cout<<endl;
          }
      cout<<sum<<endl;
   } 
   return 0;
}   
