#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

long long max(long long[],long long);
void quickSortIterative(long long[],long long,long long);
long long partition(long long[],long long,long long);
void swap(long long*,long long*);

int main(){
    long long n,k=1;
    scanf("%lld",&n);
    if(n<1 || n > 5*((long long)pow(10,5))){
        exit(0);
    }
    long long budget[n],aux[n];
    for(long long i=0;i<n;i++){
        scanf("%lld",&budget[i]);
        if(budget[i]<1 || budget[i] > (long long)pow(10,8)){
             exit(0);
        }
    }
    quickSortIterative(budget,0,n-1);
    for(long long j=n-1;j>=0;j--){
        aux[j] = budget[j]*k;
        k++;
    }
    cout<<max(aux,n);
    return 0;
}

long long partition (long long arr[], long long l, long long h){
    long long x = arr[h];
    long long i = (l - 1);

    for (long long j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

void swap ( long long* a, long long* b ){
    long long t = *a;
    *a = *b;
    *b = t;
}

void quickSortIterative(long long arr[], long long l, long long h){
    long long stack[ h - l + 1 ];
    long long top = -1;
    stack[ ++top ] = l;
    stack[ ++top ] = h;
    while ( top >= 0 ){

        h = stack[ top-- ];
        l = stack[ top-- ];
        long long p = partition( arr, l, h );
        if ( p-1 > l ){
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }
        if ( p+1 < h ){
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
} 

long long max(long long arr[],long long length){
    long long max = arr[0];
    for(long long i=1;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
