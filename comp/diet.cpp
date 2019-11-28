#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
         int n;
         long long int k,sum=0,g;
         vector<long long int> a;
         cin>>n>>k; 
              for(int i=0;i<n;i++)
              {
                  cin>>g;
                  a.push_back(g);
              }
              int flag=0;
           for(int i=0;i<n;i++)
              {
                   
                   sum += a[i];
                   sum -= k;
                   if(sum < 0)
                   {
                     cout << "NO"<< " " << (i+1) << endl;
                     flag=1;
                     break;
                   } 
              } 
              if(flag==0)
              cout << "YES" << endl;   
              
    }
}
