#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int a[] , int n , int x)
{
    int prev = 0;
    int step = sqrt(n);
    while(a[min(step,n)-1] < x)
    {
         prev = step;
         step += sqrt(n);
         if(prev >= n)
            return -1;
    }
    while(a[prev] < x)
    {
        prev++;
        if(prev == min(step , n))
           return -1;
    }
    if(a[prev] == x)
       return prev;
       
    return -1;
}

int main()
{
     int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                34, 55, 89, 144, 233, 377, 610 };
    int x = 55;
    int n = sizeof(arr) / sizeof(arr[0]);
     
    // Find the index of 'x' using Jump Search
    int index = jumpSearch(arr, x, n);
 
    // Print the index where 'x' is located
    cout << "\nNumber " << x << " is at index " << index;
    return 0;
}