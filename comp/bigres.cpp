#include <bits/stdc++.h> 
#include <vector>
using namespace std; 
double polygonArea(vector<int> X, vector<int> Y, int n) 
{ 
    double area = 0.0; 
  int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
        j = i;  // j is previous vertex to i 
     //  cout << area << endl;
    } 
  
   return abs(area / 2.0); 
} 
  
int main() 
{ 
     int t;
     cin>>t;
     while(t--)
     {
       vector<int> a;
       vector<int> b;
       int g,h,k,n;
       cin>>n;
       for(int i=0;i<n;i++) 
       {
          cin>>g>>h;
          if(i == 0)
          {
             a.push_back(g);
             b.push_back(0);
          }
             a.push_back(g);
             b.push_back(h);
          
       }
      /* for(int i=1;i<n && n%2==0;i++) 
       {
            long long int temp = a[i];
            a[i] = 
       }*/
       a.push_back(g);
       b.push_back(0);
      // double X[] = {1, 1, 2, 3, 4, 5, 5}; 
      //double Y[] = {0, 1, 5, 3, 4, 2, 0}; 
     int sum=0,tt=0,u,v,w,xx;
     for(int i=2;i< n-1;i++)
     {
       for(int j=2;j< n-1 && i!=j;j++)
       {
          u = a[i];
          v = a[j];
          w= b[i];
          xx=b[j];
          tt = a[i];
          a[i]   = a[j];
          a[j]   = tt;
          
            tt = b[i];
          b[i]   = b[j];
          b[j]   = tt;
          //-------------
          tt = 2 * polygonArea(a, b, n+2);
          if(tt > sum)
           sum =tt;
           
           a[i]=u;
           a[j]=v;
           b[i]=w;
           b[j]=xx;
       }
     }
     cout << (sum) << endl; 
          
    }
    return 0;
} 
