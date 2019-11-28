#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
void combinationUtil(int arr[], int n, int r, int index, int data[], int i,int sum,int *count); 
  
void printCombination(int arr[], int n,int sum, int r, int* count) 
{ 
    int data[r]; 
    
    combinationUtil(arr, n, r, 0, data, 0,sum,count); 
} 
void combinationUtil(int arr[], int n, int r, int index,int data[], int i,int sum, int* count) 
{ 
    
    if (index == r) 
    {
        int  c=0; 
        for (int j = 0; j < r; j++) 
           c += data[j];
        
        if(c == sum)
          *count = *count +1;
        return; 
    } 
    if (i >= n) 
        return; 
    data[index] = arr[i]; 
    combinationUtil(arr, n, r, index + 1, data, i + 1,sum,count); 
    combinationUtil(arr, n, r, index, data, i + 1,sum,count); 
} 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {  
      int n,sum=0, k,c=0,p=0;
      int count=0;
      cin>>n>>k;
      int a[51],b[51];
      for(int i=0;i<n;i++)
      {  cin>>a[i];
         b[i] = a[i];
      }
      sort(b,b+n);
      for(int i=0;i<k;i++)
          p += b[i];
     
       printCombination(a,n,p,k,&count);
       cout<<count<<endl;
        
   }
   return 0;
}   
