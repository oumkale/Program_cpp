#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k=1;
      cin>>n;
  
    long long int budget[n],rev[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>budget[i];   
    }
    sort(budget,budget + n);
    for(long long int j=n-1;j>=0;j--)
    {
        rev[j] = budget[j]*k;
        k++;
    }
    long long int max=0;
   for(long long int j=n-1;j>=0;j--)
      if(max < rev[j])
          max = rev[j];
     cout<<max<<endl;
    return 0;
}

