#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)cin>>a[i];
    int max_so_far = INT_MIN;
    int max_end_here = 0;
    for(int i = 0 ; i < n ; i++)
    {
        max_end_here+=a[i];
        if(max_so_far < max_end_here)
            max_so_far = max_end_here;
        if(max_end_here < 0)
          max_end_here = 0;
    }
    cout<<max_so_far;

}