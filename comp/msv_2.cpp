#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(long long int arr[],long long int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    int temp[n]; 
    int j = 0; 
    for (int i=0; i<n-1; i++) 

        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
    temp[j++] = arr[n-1]; 
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
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
         b[a[i]]++;
       }
        
          m = removeDuplicates(a, n);
          
          count = 0;
          for(long long int i=0;i<m;i++)
          {
              count=0;
            for(long long int j=0;j<m && j!=i ;j++)
            {
              //cout<<" a[j] "<<a[j]<<" ";
              if(a[i]!=1 && a[j]!=1)
              {
                if(a[j]%a[i]==0)
                {
                //  cout<<" a[j] "<<a[j]<<" a[i] "<<a[i]<<" ";
                  count++;
                }
              }
            if(count>=sum)
              sum = count;
            
            }
          //  cout<<endl;
          }
      cout<<sum<<endl;
   } 
   return 0;
}   
