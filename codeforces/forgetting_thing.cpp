#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,r1=1,r2=1,t=10,flag=0;
     cin>>c>>d;
     if(c-d > 1 || d-c >1)
     {   cout << (-1) <<endl;  }
     else
     {   
    	 r1 = 10 * c  ;
    	 r2 = 10 * d  ;
    	 a = r1;
    	 b = r2;
    	 for(int i=b;;i++)
    	 {
    	    if(a > b)
    	       continue;
    	    for(int j=a;;j++)
    	    {
    	        if(d > c)
    	          {
    	              if(a + 1 == b )
    	               {
    	                 cout<< a<< b<<endl;
    	                 flag =1;
    	                 break;
    	                }
    	          }
    	      } 
    	      if(flag == 1)
    	         break;
    	   }
        }
   

  return 0;
}      
