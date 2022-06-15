#include<bits/stdc++.h>
using namespace std;

void findOccurance(int a[] , int n, int x)
{
    
    int l  = -1 , f = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if(x != a[i])
           continue;
        if(f == -1)
           f = i;
        l = i;
    }
    if(f != -1)
      cout<<f<<" "<<l<<"\n";
    else
      cout<<"Not Found.\n";
}

int main()
{
    // int a[] = {5,12,3,7,88,3,10,7,81,97,7,35,7,41};
    // int n = sizeof(a)/sizeof(a[0]);
    // int x = 7;
    // findOccurance(a,n,x);
    cout<<"Hello World.\n";
}