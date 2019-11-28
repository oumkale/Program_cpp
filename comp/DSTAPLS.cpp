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
       long long int n,k,count=0,para=0,c=0,p=0,nn,nm,sum1=0,sum2=0;
        cin>>n>>k;
         int box1[n],box2[n];
   //First candidate 
      nn=n;
      nm=k;
      for(long long int i=0;i<n;i++)
      {
          if(k)
          {
            count++;
            box1[c++]=1;
            k-=1;
          }
      }
      k=nm;
      long long int mo = n/k;
      for(long long int i=0;i<n;i++)
      {    
         if(mo>=k)
          {
            para++;
            box2[p++]=k;
            mo-=k;
          }
      }
       
      n = nn;
 
      if(count == para)
           cout<<"NO"<<endl;
      else if(count != para)
           cout<<"YES"<<endl;
                      
   } 
   return 0;
}   
