#include<iostream>
using namespace std;
const int mod=1e9+7;
int a[1000001]={0};
int main()
{
   long long int t,i;
   cin>>t;
   a[0]=1;
   for(i=1;i<1000001;i++)
   {
       a[i]=(a[i-1]*i)%mod;
   }
   for(i=0;i<t;i++)
   {
       long long int n;
       cin>>n;
       cout<<a[n+1]-1<<endl;
    }
return 0;
}
