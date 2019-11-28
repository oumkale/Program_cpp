#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n,m,k,l;
    cin>>n;
    long long int a[100011];
    for(long long int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    sort(a, a+n);
    if(n%2==0)
    m = n/2;
    else if(n%2==1)
     m = n/2;
     k=0;    
     l =a[0];
     
    for(long long int i=1;i<n;i++)
    {
       l = l % a[i];
    }
   
  cout<<l<<endl;
  } 

  return 0;
}
