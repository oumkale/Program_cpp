#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      //char *a = new char[11];
      if(n%2 == 0)
        cout<<"NO"<<endl;
      else if(n == 3)
      {
         string b = "010";
         string c = "001";
         string d = "100";
         cout<<"YES"<<endl;
           cout<<b<<endl;
           cout<<c<<endl;
           cout<<d<<endl;
      }
      else if(n==5)
      {
         string e = "01000";
         string f = "00100";
         string g = "00010";
         string h = "00001";
         string i = "10000";
         string j = "01000";
         string k = "00100";
         string l = "00010";
         string m = "00001";
         string n = "10000";
         cout<<"YES"<<endl;
         
           cout<<e<<endl;
           cout<<f<<endl;
           cout<<g<<endl;
           cout<<h<<endl;
           cout<<i<<endl;
           cout<<j<<endl;
           cout<<k<<endl;
           cout<<m<<endl;
           cout<<n<<endl;
           
      }  
   }
   return 0;
}  
