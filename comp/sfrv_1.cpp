#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
int main()
{
   int t;
	cin>>t;
	while(t--)
 	{
            long long int n;
	    cin>>n;
	    long long int a[n+1], sum=0, dp[n+1],i;
            memset(dp,0,sizeof(dp));
	    for(i=1;i<=n;i++)
            {
                cin>>a[i];
                sum=sum+a[i]*(i);
                dp[i]=sum;
            }
            long long int ans=0;
           for(i=2;i<=n;i++)
           {
                dp[i]=max(dp[i-2]+a[i-1]*i+a[i]*(i-1),dp[i-1]+i*a[i]);
           }
           cout<<dp[n]<<endl;
	}
}

