#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
      string str;
      cin>>str;
        
    cout<<str.length()<<endl;
    long int n= str.length();
    for(long int j=0;j<n;j++)
    {
     for(long int i=0;i<n;i++)
     {
           if(str[i]=='1')
           {
                 
                 if(i==0)
                 {

                       if(str[i+1] == '1')
                          str[i+1] ='0';
                       else if(str[i+1] == '0')
                          str[i+1]='1';
                        else
                                ;

                 }
                 else if(i==n-1)
                 {

                       if(str[i-1] == '1')
                          str[i-1] ='0';
                       else if(str[i-1] == '0')
                          str[i-1]='1';
                       else
                             ;
                 }
                 else
                 {

                       if(str[i-1] == '1')
                          str[i-1] ='0';
                       else if(str[i-1] == '0')
                          str[i-1]='1';
                       else
                              ;

                       if(str[i+1] == '1')
                          str[i+1] ='0';
                       else if(str[i+1] == '0')
                          str[i+1]='1';
                       else
                              ;

                 }
              // cout<<"iiiiii"<<endl;

                str[i] = '9';

           }
            else
                  ;
     }
    }
     int b=0;
    // for(int i=0;i<n;i++)
      //  cout<<s[i]<<endl;

     for(long int i=0;i<n;i++)
     {
       if(str[i]!='9')
       {
        b++;
        cout<<"LOSE"<<endl;
        break;
       }
     }
       if(b==0)
        cout<<"WIN"<<endl;
    return 0;
}

