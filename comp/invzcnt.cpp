#include <iostream>
using namespace std;
#include <set> 
using namespace std;   

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
       long long int n,q,k,i,j;
       cin>>n>>q;
       int *a= new int[n];
       for(i=0;i<n;i++)
       {
          cin>>a[i];
       }
       int *b= new int[n];
       while(q--)
       {
              cin>>k;
              for(i=0;i<n;i++)
              {
                 b[i] = a[i]^k;
                 //cout << b[i] << " ";
              }
              
              for(i=0;i<n;i++)
              {             
                
              }
       } 
      
      delete [] a;
      delete [] b; 
  }
}
