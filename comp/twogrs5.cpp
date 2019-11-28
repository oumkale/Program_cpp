 
#include <bits/stdc++.h> 
using namespace std; 
  
// Recursive function that returns true if the array 
// can be divided into two sub-arrays 
// satisfying the given condition 
bool helper(int* arr, int n, int start, int lsum, int rsum) 
{ 
  
    // If reached the end 
    if (start == n) 
        return lsum == rsum; 
  
    // If divisible by 5 then add to the left sum 
    if (arr[start] % 5 == 0) 
        lsum += arr[start]; 
  
    // If divisible by 3 but not by 5 
    // then add to the right sum 
    else if (arr[start] % 3 == 0) 
        rsum += arr[start]; 
  
    // Else it can be added to any of the sub-arrays 
    else
  
        // Try adding in both the sub-arrays (one by one) 
        // and check whether the condition satisfies 
        return helper(arr, n, start + 1, lsum + arr[start], rsum) 
           || helper(arr, n, start + 1, lsum, rsum + arr[start]); 
  
    // For cases when element is multiple of 3 or 5. 
    return helper(arr, n, start + 1, lsum, rsum); 
} 
  
// Function to start the recursive calls 
bool splitArray(int* arr, int n) 
{ 
    // Initially start, lsum and rsum will all be 0 
    return helper(arr, n, 0, 0, 0); 
} 
  
// Driver code 
int main() 
{ 


      int t;
    cin>>t;
    while(t--)
    {
      long long int a,b,c,n,sum=0;
        cin>>a>>b>>c;
      int ar[301];
      vector<int> set1, set2;
      for(long long int i=0;i<(a);i++)
       { 
         ar[i]=1; 
         sum += ar[i];
       }
       
       for(long long int i=a;i<(b+a);i++)
       {
         ar[i]=2; 
         sum += ar[i];
       }
       for(long long int i=b+a;i<(c+a+b);i++)
        {
          ar[i]=3;  
          sum += ar[i];
        }
       n =(a+b+c);
       if (sum % 2 != 0) 
        { cout<<"NO"<<endl;
          continue;
        }
        if (splitArray(ar, n)) 
        cout << "YES"<<endl; 
    else
        cout << "NO"<<endl; 
    } 
    
    
    
  
    return 0; 
}
