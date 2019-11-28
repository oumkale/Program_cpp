#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,t,sum=0,c=0,i=1,j=2;
   cin>>n;
   int a[200001];
   for(long long int i=1;i<=n;i++)
     cin>>a[i];
     
    t = (n*(n-1))/2;
   for(long long int i=1;i <= n;i++)
	{
		sum += (i-1)*(a[i]-a[i-1]);
		c += sum;
	}
/*
    while(1)
    {
        sum += abs(a[i] - a[j]);
        j++;
        if(j>n)
         {
          i++;
          j=i+1;
          
         }
        c++;
        if(c == t)
         break;
             
    }
  */
   /* for(long long int i=1;i<n;i++)
    {
      for(long long int j=i+1;j<=n;j++)
      {
         sum+= abs(a[i] - a[j]);
      }
    }
   */
    cout<<c<<endl;  
}

