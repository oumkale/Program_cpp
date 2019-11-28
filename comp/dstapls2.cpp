/*
# cook your dish here
t = int(input())

if t <= 250 and t >= 1:
    

    for _ in range(t):
        
        n,k = map(int,input().split())
        
        if (n <= 10 ** 18 and k <= 10 ** 18) and (n >= 1 and k >= 1):
            
            if n % k == 0 : 
            
                x = n/k
                
                if k == 1:
                    print('NO')
                elif x % k == 0:
                    print("NO")
                else:
                    print('YES')


*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   while(t--)
   { 
     long long int n,k,x;
      cin>>n>>k;
      
      if(n%k==0)
      {
         x= n/k;
         if(k == 1)
          cout<<"NO"<<endl;
         else if(x%k==0)
         {
            cout<<"NO"<<endl;
         }
         else
           cout<<"YES"<<endl; 
      }         
   } 
   return 0;
}   
