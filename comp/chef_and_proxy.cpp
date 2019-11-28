#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long int d,p=0,a=0,proxy=0;
      cin>>d;
      string s;
      cin>>s;
      for(long int i=0;i<d;i++)
           {
               if(s[i] == 'P'  || s[i] == 'p') 
                  p++;
               else
                 a++;
           }
        cout<<"P :"<<p<<" A :"<<a<<" % :"<<(p*100)/d <<endl;
       if((p*100)/d >= 75)
         cout<<0<<endl;
       else
        {      
           for(long int i=2;i<d-2;i++)     
              {
                 if((s[i]=='A')&&(s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
                 {
                    s[i] == 'P';
                   proxy++;
                   if(((p + proxy)*100)/d >= 75)
                   {
                     cout<<proxy<<endl;
                     break;
                   }
                 }
              
              }
           if(((p + proxy)*100)/d < 75)
           {
              cout<<(-1)<<endl;
           }
       } 
   }   
   return 0;
}

