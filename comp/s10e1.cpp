#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
/*
T = int(input())
S = []
while T:
    N = int(input())
    P = [int(i) for i in input().split()]
    count = 0
    for i in range(len(P)):
        j = i - 1
        while j > (i-6) and j > -1:
            if P[i] > P[j]:
                break
            j = j-1
        if j == -1 or j == i-6:
            count = count + 1
    S.append(count)
    T = T - 1

for s in range(len(S)):
    print(S[s])

except EOFError:
    print("Exit")
*/

int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
       int n,count=0;
       int a[100];
       
       cin>>n;
       for(int i=0;i<n;i++)
       {
          cin>>a[i]; 
       }
       int price = a[0],min=0;
       int c=0,j;
       for(int i=0;i<n;i++)
       {
           j = i-1;
           while(j>(i-6) && j>-1)
           {
              if(a[i] > a[j])
                break;
              j--;  
           }
           if(j == -1 || j == i-6)
             count++;
       }
       cout<<count<<endl;  
   } 
   return 0;
}   
