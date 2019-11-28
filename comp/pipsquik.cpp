#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  { 
      int n,h,y1,k,y2,l,t,x1,x2,X,u=0,x;
      cin>>n>>h>>y1>>y2>>l;
      k=n;
      
      while(k--)
      {
           cin>>t>>x;
            
            if(t==1 && x< h-y1)
            { 
             l--;
            }
            else if(t==2 && y2<x)
            { 
             l--;
            }
            if(l==0)
                break;
            else
              u++;
         }
      cout<<u<<endl;  
      
  }
  return 0;
}
