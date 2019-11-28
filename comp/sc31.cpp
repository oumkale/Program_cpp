#include <iostream>
#include "map"
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
         long long int n,u=1;
        cin>>n;
        int k=0,m=0;
        string s; 
       
        
        map<int,string>ourmap;
        for(long long int i=0;i<n;i++)
        {
            cin>>s;
            ourmap[i] = s;
            
        }
        map<int,string>::iterator it=ourmap.begin();
        it++;
        map<int,string>::iterator it1=it;
        it= ourmap.begin();
      /*  cout<<"it->second "<<it->second<<endl;
        cout<<"it->second[1] "<<it->second[1]<<endl;
        cout<<"it1->second "<<it1->second<<endl;
        cout<<"it1->second[1] "<<it1->second[1]<<endl;
       */ 
        while(it1!=ourmap.end())
        {
            //cout<<"it->second "<<it->second <<endl;
            //cout<<"it1->second"<<it1->second<<endl;
        
            for(int i=0;i<10;i++)
            {
                if(it->second[i] == it1->second[i])
                {
                   it->second[i] ='0';
                   it1->second[i]='0';
                }
                else if(it1->second[i]=='1')
                {
                      it->second[i] = '1';
                      it1->second[i]='0';
                }
            }
            
            it1++;
            
        }
        it=ourmap.begin();
        //cout<<"it->second "<<it->second <<endl;
            
        for(int i=0;i<10;i++)
        {
           if(it->second[i] == '1')
               k++;
        }  
          cout << k << endl;
          //continue; 
        
  }
  return 0;
}
