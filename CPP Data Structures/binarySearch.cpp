#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x , sum = 0;
        cin>>n>>x;
        int minNot = INT_MAX;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            minNot = min(minNot,a[i]);
            sum+=a[i];
        }
        if(sum%x>=minNot)
           cout<<"-1"<<"\n";
        else
           cout<<sum/x<<"\n";
    }
}