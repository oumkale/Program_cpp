#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include<bits/stdc++.h> 
using namespace std; 
  
void printSubsequences(long long int a[],long long int n,long long int k,long long int* count) 
{ 
    long long int c=0,p=0,t=0,l;
    unsigned long long int opsize = pow(2, n); 
    long long int b[100];
    for (long long int counter = 1; counter < opsize; counter++) 
    { 
        c=0;
        
        t=0;
        for (long long int j = 0; j < n; j++) 
        { 
            
            if (counter & (1<<j))
            { 
              //if(a[j] != a[j+1])
               c++; 
              // b[p++] += a[j]; 
              // cout << a[j] << " "; 
               
            } 
            
         } 
         if(c == k)
         {
           for (long long int j = 0; j < n; j++) 
           { 
            
              if (counter & (1<<j))
               { 
             
                  b[p] += a[j]; 
                  // cout << a[j] << " "; 
               
               } 
            
           } 
           p++;  
         }
            
       // cout << endl; 
    } 
    sort(b,b+p);
     l = b[0];
     for(int i=0;i<p;i++)
          if(l == b[i])
             count++;
             
    // cout<<*count<<endl;
} 
int main() 
{ 
    long long int t;
    cin>>t;
   while(t--)
   {
    long long int n ,a[100001]; 
    long long int k,count=1 ;
    long long int m=pow(10,9)+7;
    cin>>n>>k; 
    for(long long int i=0;i<n;i++)
       cin>>a[i];
    
      printSubsequences(a, n,k,&count); 
      cout<<(count%m)<<endl; 
   }
    return 0; 
} 
