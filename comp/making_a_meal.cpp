#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
  long int t;
  cin>>t;
  while(t--)
  {
     long int j,i, n,k=0,c=0,o=0,d=0,e=0,h=0,f=0,small,m;
     cin>>n;
     string str;
     char b[100000] = {'z'};
     int cc[6];
      for(i=0; i<n ;i++)
      { 
        cin>>str; 
        for(j=0; j<str.length();j++)
        { 
           b[k++]= str.at(j);
        }
      }
      for(i=0; i<k ;i++)
      { 
        if(b[i]== 'c')
         {            
                c++;
                cc[0]=c;
         }
         else if(b[i]== 'o')
         {
           o++;
           cc[1]=o;
         }
         else if(b[i]== 'd')
         {
            d++;
            cc[2]=d;
         }
         else if(b[i]== 'e')
         {
           e++;
           cc[3]=e;
         }
         else if(b[i]== 'h')
         {
           h++;
           cc[4] = h;
         }
         else if(b[i]== 'f')
         {
           f++;
           cc[5]=f;
         }
         else
               ;
           
      }
      cc[0]=cc[0]/2;
      cc[3]=cc[3]/2;
      sort(cc,cc+6);
      small = cc[0];
      cout<<small<<endl; 
  }
   return 0;
} 
