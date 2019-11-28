#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
   long int t;
   cin>>t;
   while(t--)
   { 
       long int n,p=0,q=0;
       cin>>n;
       long int a[100002],b[100002],c[100002]={0},co=0,cot=0,cot2=0;
       for(long int i=1;i<=n;i++)
          cin>>a[i];
       for(long int i=1;i<=n;i++)
          cin>>b[i];
       
       for(long int i=0;i<=n;i++)
       {
          if((i-a[i])<=1)   
             p = 1;
          else
            p= i-a[i];
             
             if(i + a[i]>=n)
               q=n;
             else
              q = i + a[i];
           for(long int j=p;j<=q;j++)
             c[j] +=1;   
       }
          co = c[n/2];
         cot2 = count(c+1, c + n+1, co);
         cot2 = count(b+1, b + n+1, co); 
         //cout<<endl; 
      // sort(c+1, c + n+1);   
      //  sort(b+1, b + n+1);

      
        long int count=0; 
        //for(long int i=1;i<=n;i++)
         //cout<<c[i]<<" ";
      /*   
      for(long int i = 1; i <= n; i++) 
      {
        if(c[i]!=b[i]) 
          { 
            count++;
             cout << "NO"<<endl;     
             break;
          }  
      }*/
       //cout<<"cot "<<cot<<endl;
       //cout<<"cot2 "<<cot2<<endl; 
      if(cot==cot2) 
        cout << "YES"<<endl; 
     else
        cout << "NO"<<endl;
     
   }
   return 0;
}
