#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   long int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j;
        long long int a[100001],m[100001];
        cin>>n;
        for(i=0;i<n;i++)
             cin>>a[i];   

   
        long long sum=0,s=0,su=0,l=1,u=1,summ=0,p=0,b=0;  
       
       for(i=0;i<n;i++)
         sum += (i+1)*a[i];
       //cout<<sum<<endl;
       for(i=0;i<n;i++) 
          m[i]=a[i];  
       for(i=0;i<n;i++)
       {
           for(j=0; j<n ;j++)
           {      
                if(j==i+1 || i==j+1)  
                {
                 u=1;
                 su=0;
                 long long int temp = a[i];
                 a[i] = a[j];   
                 a[j] = temp;   
                 for(i=0;i<n;i++)
                     {
                       su += u*a[i]; 
                        u++;
                     }
                   if(su > p)
                        p=su;
                  cout<<"p :1"<<p<<endl;
                 for(i=0;i<n;i++) 
                    a[i]=m[i];
               }
           }
                for(i=0;i<n;i++) 
                    a[i]=m[i];
              for(j=0; j<n ;j++)
           {      
                if(j==i+1 || i==j+1)  
                {
                 
                 long long int temp = a[i];
                 a[i] = a[j];   
                 a[j] = temp;   
                 
               
                 
               }
                         u=1;
                 summ=0;
                    for(i=0;i<n;i++)
                     {
                       summ += u*a[i]; 
                        u++;
                     }
                   if(summ > b)
                        b=summ;
                         cout<<"b :"<<b<<endl;
            }
             
                 l=1;
                 s=0;
                  for(i=0;i<n;i++)
                     {
                       s += l*a[i]; 
                        l++;
                     }
                   cout<<"s :"<<s<<endl;
                   if(s >= p && s>=b && s>sum)
                        sum=s; 
                   else if(p > s && p>b && p> sum)
                         sum=p;
                   else if(b>=p && b>=s && b>sum)
                           sum=b;
                   for(i=0;i<n;i++) 
                    a[i]=m[i];
                                     
       }   
       
       cout<<sum<<endl;   
          
    }
} 
