#include <iostream>
#include <cmath>
#include <algorithm>
#include <sstream>
#include<string.h> 
#include <string> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,q=0,c=0,sum=0,qu,count=1;
    long long int max=0;
    string a,b;
    cin>>qu;
    n=0;
     int value[qu];
     //count =qu;
    for(i=1;i<=qu;i++)
      { cin>>n; 
           value[i] =n;
         if(n>max)
            max=n;    
      }
    
    for(i=1;i<=max;i++)
        {
          b=to_string(i);
          a.append(b);
          
     
        }
    while(qu--)
    {   
       
       
         
        q = a[(value[count++])-1];
        //q = atoi(c);
        //cout<<q<<" ";
        c = q-48;
        sum += c;
       //cout<<"Sum :"<<sum<<" ";
      
    }
    cout<<sum<<endl;
   return 0;
} 


