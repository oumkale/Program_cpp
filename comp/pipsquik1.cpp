#include<iostream>
using namespace std;
int main()
{
  int T,n,h,y1,y2,l,bar,i;
   cin>>T;
   while(T--)
   { 
      cin>>n>>h>>y1>>y2>>l;
      bar=0;
      int t[n],x[n];
      for(i=0;i<n;++i)
         cin>>t[i]>>x[i];
      for(i=0;i<n;++i)
      {
      
        if(t[i]==1&&h-y1>x[i])
             l--;
        else if(t[i]==2&&y2<x[i])
             l--;
        if(l==0)
          break;
        else
           bar++;
      }
       cout<<bar<<endl;
    }
    return 0;
}

