#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n;
     cin>>n;
     int a[100];
     
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     int good=1;
     int min=a[0], less=0;
     int c=0,m=0;;
     for(int i=1;i<n;i++)
     {
       
         if(c>=5)
         {
           // cout<<" c : " <<c<< " less "<<less<<" a[i] "<<a[i]<<endl;
            if(a[i] < less)
            {
              good++;
              min = a[i];
              c=0;
              less=0;
              m=0;
            }
            else
            {
             c=4;
            }
         }
         else
         {
           if(min < a[i])
            {    
              if(m==0)
               {
           	      m++;
           	      less = a[i];
               }
         
              if(a[i]< less)
                 less = a[i];   
              c++;
             // cout<<" c : "<<c<<endl;
           }
           else
           {
             //cout<<" c : "<<c<<endl;
             good++;
             min = a[i];
             less=0;
             c=0;
             m=0;
           }
        }
           
     }
     cout<<good<<endl;
  }
}
