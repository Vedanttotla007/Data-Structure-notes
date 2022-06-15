#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n , m , k ;
      cin>>n>>m>>k;
      int r;
      while(k > 0)
      {
         if(n > m)
         {
            m = min(n,m)+1;
         }
         else if(m  > n)
         {
            n = min(m,n)+1;
         }
         k--;
      }
      cout<<abs(m-n)<<endl;
   }
}