 
#include <bits/stdc++.h> 
using namespace std;  
int main() 
{ 
    
    int t;
    cin>>t;
    while(t--)
    {
      long long int a,b,c,n,sum=0;
        cin>>a>>b>>c;
      int ar[301];
      vector<int> set1, set2;
      for(long long int i=0;i<(a);i++)
       { 
         ar[i]=1; 
         sum += ar[i];
       }
       
       for(long long int i=a;i<(b+a);i++)
       {
         ar[i]=2; 
         sum += ar[i];
       }
       for(long long int i=b+a;i<(c+a+b);i++)
        {
          ar[i]=3;  
          sum += ar[i];
        }
       n =(a+b+c);
       if (sum % 2 != 0) 
        { cout<<"NO"<<endl;
          continue;
        }
        else if(n==2)
         {
            if(ar[0] == ar[1])
              cout<<"YES"<<endl;
            else
              cout<<"NO"<<endl;  
         }
         else if(sum % n == 0)
         {
           cout<<"YES"<<endl;
         }
         else if(sum % n != 0)
           cout<<"NO"<<endl;
         else
            cout<<"NO"<<endl;
    } 
    
    return 0; 
}
