#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int x,y,s;
    while(t--)
    {
        long long int i,j,n;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
         {
            a[i]=i+1;
         }  
        for(i=0;i<n;i++)
        {
           if(i != (n-1))
           {
             x = a[i];
             y = a[n-1];
             s = x + y + x*y;
             a[n-1] = s;
           }  
        }   
        cout<<a[n-1];
    }      
    return 0;
}
