#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void combinationUtil(long long int arr[], int n, int r, int index,                   long long int data[], int i,long long int p,int& count) 
{ 
     long long int b[r+1];
     
    if (index == r) { 
        for (int j = 0; j < r; j++) 
         {    b[j] = data[j]; 
            //  cout<<"R "<<r<<endl;
            // cout<<data[j]<<" ";
         }
        // cout<<endl;
        //sort(b,b+r);
        bool t=true;
        for(int i=0;i<r-1;i++)
        {
          if(b[i+1] - b[i] <= p)
              t = true;
           else 
            {  t = false;
              break;
             }    
        }
        if(t == true)
          count = count +1;
        return; 
    } 
    if (i >= n) 
        return;  
    data[index] = arr[i]; 
    combinationUtil(arr, n, r, index + 1, data, i + 1,p,count); 

    combinationUtil(arr, n, r, index, data, i + 1,p,count); 
} 
void printCombination(long long int arr[], int n, int r,long long int p,int & count) 
{ 
    
    long long int data[r];  
    combinationUtil(arr, n, r, 0, data, 0,p,count); 
} 

int main() 
{ 
    int t;
    cin>>t;
    long long int m=1000000000+7; 
    while(t--)
    {
       int n,k;
       long long int p;
       int count=0;
       cin>>n>>k>>p;
       long long int a[2002];
        for(int i=0;i<n;i++)
           cin>>a[i];
       sort(a,a+n);
       printCombination(a, n, k,p,count); 
       cout<<(count%m)<<endl;
    }
    return 0; 
}
