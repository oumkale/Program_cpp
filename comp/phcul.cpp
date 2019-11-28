#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>

using namespace std;
int main()
{
 // printf("%.10f", (sqrt(13) + sqrt(2) + sqrt(10)) ) ;
  int t;
  cin>>t;
  while(t--)
  {
  
          
           unordered_map<int,int> n;
           unordered_map<int,int> m;
           unordered_map<int,int> k;
           int N,M,K;
           int x,y,e,r;
            scanf("%d",&e);
               scanf("%d",&r);
              cin>>N>>M>>K;
            double a[101]={0}, b[101]={0}, c[101]={0},z=0, d[5];
            double g,h;
           int u=0,v=0,w=0;
           for(int i=0;i<N;i++)
           {
               scanf("%d",&x);
               scanf("%d",&y);
               x = abs(e-x) * abs(e-x) + abs(r-y) * abs(r-y);
               g = sqrt(x);
               a[u++] = g;
           }
           u=0;
            for(int i=0;i<M;i++)
           {  
           scanf("%d",&x);
               scanf("%d",&y);
              x = abs(e-x) * abs(e-x) + abs(r-y) * abs(r-y);
               g = sqrt(x);
               b[v++] = g;
           }
           
            for(int i=0;i<K;i++)
           {
                 scanf("%d",&x);
               scanf("%d",&y);
             
               x = abs(e-x) * abs(e-x) + abs(r-y) * abs(r-y);
               g = sqrt(x);
               c[w++] = g;
           }
          
           cout<< endl;
           h = a[0] + b[0] + c[0];
           
           for(int i=0;i<u;i++)
            {
               for(int j=0;i<v;i++)
               {
                 for(int r=0;r<w;r++)
                 {
                     if(a[i] + b[j] + c[r] < h)
                      h = a[i] + b[j] + c[r];
                 }
               }
            }
           printf("%.10f ", h);
         /* for(int i=0;i<N;i++)
              printf("%.10f ", a[i]);
           cout << endl;
           for(int i=0;i<M;i++)
           printf("%.10f ", b[i]);
           cout << endl;
           for(int i=0;i<K;i++)
             printf("%.10f ", c[i]);
           cout << endl;   
         */
  }
  return 0;
}
