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
       long int a[100002],b[100002],c[100002]={0},cou=0;
       for(long int  i=1;i<=n;i++)
          cin>>a[i];
       for(long int  i=1;i<=n;i++)
          cin>>b[i];
       cout<<"Yesss"<<endl;
        cout<<"a"<<a[1]<<endl;
        cout<<"b"<<b[1]<<endl;
       for(long int i=1;i<=n;i++)
       {
          if((i-a[i])<=1)   
             p = 1;
          else
            p= i-a[i];
          //cout<<p<<" p"<<endl;   
             if(i + a[i]>=n)
               q=n;
             else
              q = i + a[i];
               //cout<<q<<" q"<<endl;
           for(long int j=p;j<=q;j++)
             c[j] +=1;
          
       }
         for(long int t=1;t<=n;t++)
         cout<<c[t]<<" ";
         //cout<<endl; 
       // sort(c+1, c + n+1);   
        //sort(b+1, b + n+1);
        long int i=1,j=1;
        while(i <= n)
        {
          
          if(b[i] == c[j])
             {
               b[i] = NULL;
               i++; 
               j++; 
             }   
             else
             {
                j++;
             } 
           if(j>n)  
            j=1; 
                           
        }
        long int count=0; 
   /*   for(long int i = 1; i <= n; i++) 
      {
        if (c[i] != b[i]) 
          { 
            count++;
             cout << "NO"<<endl;     
             break;
          }  
      }
      if(count==0) 
        cout << "YES"<<endl; 
     */
      for(i = 1; i <= n; i++) 
      {
        if(b[i]) 
          { 
            count++;
             cout << "NO"<<endl;     
             break;
          }  
      }
      if(count==0) 
        cout << "YES"<<endl; 
     
       
   }  
   return 0;
}   
