#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        long long int n,j=0,sum=0;
        cin>>n;
        long long int a[1000001];
        for(long long int i=0;i<n;i++)
           cin>>a[i];
        cout<<" n " <<n<<endl;   
        if(n==2)
         {
           sum = a[0] * a[1];
           cout<<"if"<<sum<<endl;   
         }
        else
        {
         for(long long int i=0;i<n-1;i++)
          {
              j = a[i] * a[i+1];
              a[i+1] = a[i] + a[i+1];
              sum += j;
              cout<<"else :"<<sum<<endl;
          } 
         } 
         cout<<" ===>"<<sum<<endl; 
   }
}
