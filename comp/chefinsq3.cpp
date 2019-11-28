#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 

  int t;
  cin>>t;
  while(t--)
  {
 	int n ,a[52],c=0,t=0,count=0; 
 	int k;
	 
    cin>>n>>k; 
    for(int i=0;i<n;i++)
       cin>>a[i];
    
    long long int m=pow(10,9)+7,p=0;
    unsigned  int opsize = pow(2, n); 
    int *b = new int[100000001];
    for (int counter = 1; counter < opsize; counter++) 
    { 
        c=0;
        t=0;
        for ( int j = 0; j < n; j++)    
            if (counter & (1<<j))
               c++;
        
         if(c == k)
         {
           for ( int j = 0; j < n; j++) 
               if (counter & (1<<j))
                t += a[j]; 
          
           b[p] = t; 
           p++;    
         }
         else
           ;   
    } 
    
    sort(b,b+p);
    t = b[0];
      for(int i=0;i<p;i++)
      {   
          if(t == b[i])
            {
             count = count +1;
             
             }
      }
    cout<<((count)%m)<<endl;       
    delete[] b;
  }
    

    return 0;
} 

