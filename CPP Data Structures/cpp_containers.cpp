#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , d ; 
        cin>>n>>d;
        int a[n];
        int risk  = 0 , not_risk = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            if(a[i]<=9||a[i]>=80)
               risk++;
            else
               not_risk++;
        }
        int ans = risk/d + not_risk/d;
        if(not_risk%d!=0)
           ans++;
        if(risk%d!=0)
           ans++;
        cout<<ans<<"\n";
    }
}