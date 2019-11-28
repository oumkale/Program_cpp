#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void combinationUtil(long long int arr[], int n, int r, 
                     int index, int data[], int i,int p,int& count); 
  
void printCombination(long long int arr[], int n, int r,int p,int & count) 
{ 
    
    int data[r];  
    combinationUtil(arr, n, r, 0, data, 0,p,count); 
} 
void combinationUtil(long long int arr[], int n, int r, int index, 
                     int data[], int i,int p,int& count) 
{ 
     int b[r+1],t;
     
    if (index == r) { 
        for (int j = 0; j < r; j++) 
         {    b[j] = data[j]; 
            //  cout<<"R "<<r<<endl;
            // cout<<data[j]<<" ";
         }
         cout<<endl;
        sort(b,b+r);
        bool t=true;
        for(int i=0;i<r-1;i++)
        {
          if(b[i+1] - b[i] <= p)
              t = true;
           else if(b[i+1] - b[i] > p)
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
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
       int n,k,p;
       int count=0;
       cin>>n>>k>>p;
       long long int a[2002];
        for(int i=0;i<n;i++)
           cin>>a[i];
       
       printCombination(a, n, k,p,count); 
       cout<<count<<endl;
    }
    return 0; 
}
