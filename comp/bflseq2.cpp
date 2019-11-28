#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include<bits/stdc++.h> 
long long m=1000000000+7;
using namespace std; 
int main() 
{ 

  int t;
  cin>>t;
  while(t--)
  {
 	int n ,a[52],c=0,t=0,count=0; 
 	int k;
	 long long int p;
    cin>>n>>k>>p; 
    for(int i=0;i<n;i++)
       cin>>a[i];
    sort(a,a+n);
    //long long int p=0;
    unsigned int opsize = pow(2, n); 
    int b[k+1];
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
           {
               if (counter & (1<<j))
               { //t += a[j]; 
                 b[t++] = a[j]; 
                // cout<<a[j]<<" ";
               }
            }  
            //cout<<endl;
            //sort(b,b+k);
            bool u=true;
           for(int i=0;i<k-1;i++)
           {
              if(b[i+1] - b[i] <= p)
                u = true;
              else if(b[i+1] - b[i] > p)
              { 
                u = false;
                break;
               }    
           }
           if(u == true)
             count = count +1;
        
       
            
          }
          else
            ; 
    } 
    //t = b[0];
    
    cout<<((count)%m)<<endl;       
    
  }
    

    return 0;
} 

