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
     int n;
     long long int k;
     cin>>n>>k;
     long long int a[10001];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }          
     long long int i=0;
     long long int p,q,m;
     while(i<k)
     {
        
        p = a[i%n];
        q = a[n-(i%n)-1];
        m = p^q;
        cout<<" M: "<<m<<" ";
        a[i%n] = m;
        i++;
     }  
     for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
     cout<<endl; 
   //  cout<<endl;
   } 
   return 0;
}   
