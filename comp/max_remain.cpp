#include <iostream>
#include <limits>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
  long int n;
  cin>>n;
  long long int a[100001];
  for(long int i=0;i<n;i++)
    cin>>a[i];
  long int max = INT_MIN;
  for(long int i=0;i<n;i++)
    {
      if(max < a[i])
        max = a[i];
    } 
  //cout<<max<<endl;
   int max2=0;
    for(long int i=0;i<n;i++)
    {
        if(a[i] % max >max2)
          max2 = a[i];
    }  
    cout<<max2<<endl;
  return 0;
}
