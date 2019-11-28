#include <iostream>
#include <cstdlib> 
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
      long int t;
      cin>>t;
      while(t--)
      {
         long int n;
         cin>>n;
         int a[n];
         for(long int i=0;i<n;i++)
            cin>>a[i];
         
         sort(a, a+n);
         //for(long int i=0;i<n;i++)
         //   cout<<a[i]<<endl;
          int j=1,r=n;
          
       /*  while(r > (n/2 -1) && (r > j)) 
         { 
            int temp = a[j];
            a[j] = a[r-1];
            a[r-1] = temp;
            r = r-2;
            j = j+1; 
         }
         //cout<<"----------"<<endl; 
         //for(long int i=0;i<n;i++)
         //   cout<<a[i]<<endl;
         //cout<<"----------"<<endl; */
        long long int sum =0; 
        j=0;
        int b=n-1;
        while(j<b){
            sum+=abs(a[b]-a[j]);
            j++;
            b--;
        } 
           cout<<sum<<endl;
      }
}
