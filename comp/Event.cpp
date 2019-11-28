#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a[7]={"monday" , "tuesday" , "wednesday" , "thursday" , "friday" , "saturday" , "sunday"};
    while(t--)
    {
        int l,r,j,k;
        string s,e;
        
        cin>>s;
        cin>>e;
        cin>>l;
        cin>>r;
        int diff;
        diff = r - l;
        for(int i = 0; i < 7; i++)
        {
           if(s==a[i])
           {
             j = i;
           }
           if(e==a[i])
           {
             k = i;
           }
        }  
        int diffDays, d;
        
         if(k>=j)
         diffDays = (k -j)+1;
        else
         diffDays = 8 - (j - k);  
        int u=0,count=0;
        while(l<=r)
        {   
           u++;
           if((diffDays) == l )
            {
               count++;
               d = l;
               //cout<<diff<<endl;
                
            }
             else if(diffDays<l)
	        {
	            while(diffDays<=l)
	            {
	                if(diffDays==l)
                    {
                        count++;
                        ans=i;
                        break;
                    }
                    diffDays+=7;
	            }
	        }     
	     
          l++;    
        }
            if(count == 1)
            {
               cout<<d<<endl;
            }
           else if(count == 0)
            {
                cout<<"impossible"<<endl;
            }
           else
              cout<<"many"<<endl;
    }
    return 0;
}
