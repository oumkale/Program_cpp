#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
    
    
    long long int i,x;
    
    x = s.length();
    for(i=0;i<s.length();i++)
    {    
        if( s[i] == '1')
        {    
            if(s[i + 1] == '0')
                s[i + 1] = '1';
            else
                s[i + 1] = '0';
        } 
    }       
    if(s[x - 1] == '1')
        cout<<"WIN"<<endl;
    else
        cout<<"LOSE"<<endl;  

   }
   return 0;
}


