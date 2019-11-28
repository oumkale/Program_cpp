#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
      long long int n, i;
      cin>>n;
      int count=0;
      long long int a[n],b[1000];
      for(i=0;i<n;i++)
       {
         b[i] = 0;
       } 
      for(i=0;i<n;i++)
       {
         cin>>a[i];
         b[a[i]]++;
       }  
       for(i=0;i<n;i++)
       {
           if(b[i]>1)
            {
               cout<<"Yes"<<endl;
               count++;
               break;
            }
       }
       if(count==0)
         cout<<"No"<<endl;
         
   }
   return 0;
}
