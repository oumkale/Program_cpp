#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
void combinationUtil(int arr[], int n, int r, int index, int data[], int i,int dd[], int *t ); 
  
void printCombination(int arr[], int n, int r,int dd[], int *t) 
{ 
    int data[r]; 
    
    combinationUtil(arr, n, r, 0, data, 0,dd,t); 
} 
void combinationUtil(int arr[], int n, int r, int index,int data[], int i,int dd[], int *t) 
{ 
    
    if (index == r) 
    {
        int  c=0; 
        for (int j = 0; j < r; j++) 
           c += data[j];
        dd[*t] = c;
       // cout<<*t<<endl;
        *t = *t +1;
       
        return; 
    } 
    if (i >= n) 
        return; 
    data[index] = arr[i]; 
    combinationUtil(arr, n, r, index + 1, data, i + 1,dd,t); 
    combinationUtil(arr, n, r, index, data, i + 1,dd,t); 
} 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {  
      int n,sum=0, k,c=0,p=0,t=0;
      int count=0;
      cin>>n>>k;
      int a[101],b[101],dd[101];
      for(int i=0;i<n;i++)
      {  cin>>a[i];
        //b[i] = a[i];
      }
    //  sort(b,b+n);
      //for(int i=0;i<t;i++)
        //   cout<<dd[i]<<endl;
      
       printCombination(a,n,k,dd,&t);
      // cout<<t<<endl;
        //for(int i=0;i<t;i++)
        //  cout<<dd[i]<<" ";
     
       sort(dd,dd + t);
       //cout<<endl;
          p = dd[0];
        for(int i=0;i<t;i++)
          if(p == dd[i])
             count++;
         cout<<count<<endl;
        
   }
   return 0;
}   
