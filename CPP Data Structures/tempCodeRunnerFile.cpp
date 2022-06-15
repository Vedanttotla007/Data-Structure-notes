#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    char s[n];
    for(int i = 0 ; i < n ; i++)
    {
      cin>>s[i];
    }
    cin>>s;
    set<int>v;
    v.insert(x);
    for(int i = 0 ; i < n ; i++)
    {
       if(s[i]=='L')
          x--;
       else
         x++;
       v.insert(x);
    }
    cout<<v.size()<<"\n";
  }
  
}