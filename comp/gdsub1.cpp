#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
void combinationUtil(long long int arr[],long long int n,long long int r,long long int index,long long int data[],long long int i,int *count ); 
  
void printCombination(long long int arr[],long long int n,long long int r, int* count) 
{ 
    int data[r]; 
    
    combinationUtil(arr, n, r, 0, data, 0,count); 
} 
void combinationUtil(long long int a[],long long int n,long long int r,long long int index,long long int data[],long long int i,int* count) 
{ 
    long long int b[1000001],p,t;
    if (index == r) 
    {
        int  c=0;
        p=0; 
        t=0;
       
        for (long long int j = 0; j < r; j++) 
        {
                
               b[p++] = data[j]; 
        }
        //cout<<endl;
       
           for (long long int j = 0; j < p-1; j++) 
           {
           //  cout<<b[j]<<" ";
             if(b[j] != b[j+1])
               t++;
            // cout<<b[j]<<" ";
           }
           if(r == t+1)
             *count = *count +1;
         //cout<<*count<<endl   ;
        
        return; 
    } 
    if (i >= n) 
        return; 
    data[index] = a[i]; 
    combinationUtil(a, n, r, index + 1, data, i + 1,count); 
    combinationUtil(a, n, r, index, data, i + 1,count); 
} 
int main()
{
      long long int m=pow(10,9)+7;
      long long int n,sum=0, k,c=0,p=0,t=0;
      int count=1;
      cin>>n>>k;
      count =count + n; 
      long long int a[1000001];
      for(int i=0;i<n;i++)
      {  
          cin>>a[i];
      }
      for(long long int i=2;i<=k;i++)
       printCombination(a,n,i,&count);
       cout<<count % m<<endl;   
   return 0;
}   
