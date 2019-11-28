#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <limits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string ht[100001]={0};      
       string gl[100001]={0};
       //int n = sizeof(arr)/sizeof(arr[0]);
       sort(ht, ht+100001, greater<int>());
       for(int i=0;i<12;i++)
       {  
         string a,b,vs;
         int tm1, tm2;
         cin>>a>>tm1>>vs>>tm2>>b;   
         if(tm1 > tm2) 
          {
            ht[a] += 3;
            gl[a] += tm1-tm2;
          }  
          else if(tm2 > tm1)
          {
             ht[b] += 3;
            gl[b] += tm2-tm1;
          }
          else
          {
            ht[a] +=1;  
            ht[b] +=1;
          } 
       }
     int n = sizeof(ht)/sizeof(ht[0]);
      int max = INT_MIN,j,k=0,l;
      for(int i=0;i< n;i++)
      {
         if(ht[i] > max)
         {
           k++;
           max = ht[i];
           j=i;
         }
         if(ht[i] > max && k>0)
         {
           k++;
           max = ht[i];
           l=i;
         }
         if(k>1)
          break;
      } 
     
      
    }

}
