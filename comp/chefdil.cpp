#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
void heapify(long int arr[],long int n,long int i)
{
  long int largest = i; // Initialize largest as root
  long int l = 2*i + 1; // left = 2*i + 1
  long int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(long int arr[],long int n)
{
    // Build heap (rearrange array)
    for (long int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (long int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main()
{
   long int t;
   cin>>t;
   while(t--)
   {
       long int n,p=0,q=0;
       cin>>n;
       long int a[100002],b[100002],c[100002]={0};
       for(long int i=1;i<=n;i++)
          cin>>a[i];
       for(long int i=1;i<=n;i++)
          cin>>b[i];

       for(long int i=1;i<=n;i++)
       {
          if((i-a[i])<=1)
             p = 1;
          else
            p= i-a[i];

             if(i + a[i]>=n)
               q=n;
             else
              q = i + a[i];
           for(long int j=p;j<=q;j++)
             c[j] +=1;
       }
         //for(i=1;i<=n;i++)
        //  cout<<c[i]<<" ";
         //cout<<endl;
        //sort(c+1, c + n+1);
      //  sort(b+1, b + n+1);
       heapSort(c, n+1);
       heapSort(b, n+1);
        //for(long int i=1;i<=n;i++)
       // cout<<c[i]<<" ";
        long int count=0;
      for(long int i = 1; i <= n; i++) 
      {
        if (c[i] != b[i])
          {
            count++;
             cout << "NO"<<endl;
             break;
          }
      }
      if(count==0)
        cout << "YES"<<endl;

   }
   return 0;
}
