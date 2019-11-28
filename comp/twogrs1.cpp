#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
bool findSets(int arr[],long long int n, vector<int>& set1, vector<int>& set2, int sum1, int sum2, int pos) 
{ 
   bool res;
    if (pos == n) 
    {  
        if (sum1 == sum2)
         { 
            return true; 
         } 
       else
         return false; 
    } 
    set1.push_back(arr[pos]); 
     res = findSets(arr, n, set1, set2, sum1 + arr[pos],sum2, pos + 1); 
    if (res) 
        return res; 
    set1.pop_back(); 
    set2.push_back(arr[pos]); 
    res = findSets(arr, n, set1, set2, sum1, sum2 + arr[pos],  pos + 1); 
    if (res == false) 
        if (!set2.empty()) 
           set2.pop_back(); 
    return res; 
} 
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
       bool rr = findSets(ar, n, set1, set2, 0, 0, 0);
       if (rr==true)
        cout<<"YES"<<endl;
       else
        cout << "NO"<<endl; 
    } 
    return 0; 
}
