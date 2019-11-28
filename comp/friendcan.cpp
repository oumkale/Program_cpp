#include <iostream>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
       long long int n,m,a[1000001],b[1000001],L[11],R[11],ll,rr;
       cin>>n>>m;
       cout<<"-----"<<endl;
       for(long long int i=1;i<=n;i++)
         cin>>a[i];
       for(long long int i=1;i<=m;i++)
       {
          cin>>ll>>rr;
          L[i] = ll;
          R[i] = rr;  
       }
      cout<<"============="<<endl;  
         
   }
   return 0;
}  
