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
     long long int n,m,k,count;
     cin>>n>>m;
     if(n==1)
       cout<<0<<endl;
     else if(n==2 && m<n)
     {
       if(m==1)
       cout<<1<<endl;
       else
       cout<<(-1)<<endl;
       
     } 
     else if(m/n >= 1)
     {
     
        k = m % n;
        if(k==0)
         cout<<(n/m+1)<<endl;
        else 
        cout<<(k+1)<<endl;
     }
     else if(m/n < 1)
       cout<<(-1)<<endl; 
  }
    return 0;
} 

