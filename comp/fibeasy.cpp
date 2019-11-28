 #include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 
void last(int a[], int n)
{
         int  c=0;
          for(long long int i=1;i<n;i=i+2)
               a[c++]=a[i];
          n=c;
         for(long long int i=0;i<c;i++)
            cout<<a[i]<<" "; 
            cout<<endl;
         if(n>0)
          last(a,n);
         else
          cout<<a[0]<<endl;
             
}  
int main()
{
   
   int t;
   cin>>t;
   while(t--)
   {  
     long long int n,i;
     long long int count =0,c=0;
     int a[101];// int[1000000000000000001];
     cin>>n;
    // vector<int> g1;
        a[0] = 0;
        a[1] = 1;
       
        for(i = 2; i < n; i++)
                a[i] = a[i-1] + a[i-2];

      for(long long int i=0;i<n;i++)
      {  //cout<<a[i]<<" ";
         a[i] = a[i]%10;
       // cout<<a[i]<<" ";  
      }
      
       for (i = 0; i < n; i++)
           cout<<a[i]<<" ";
         cout<<endl;
      last(a,n);

      
   }
 
   return 0;
}   
