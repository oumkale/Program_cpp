#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   long int t;
    cin>>t;
    while(t--)
    {
        long long int n,q,i,j,id,v;
         cin>>n>>q;
        long long int a[1000000001],m[10001];
        for(i=0;i<n;i++)
          cin>>a[i]; 
         int k=0; 
        while(q--)
        {
           cin>>id>>v; 
           a[id-1] =v;
           for(i=0;i<n;i++)
           {
              k=0;
             for(j=0;j<n && i!=j;j++)
             {
                
             
             }
           
           }
        
        
        }  
    }
}
