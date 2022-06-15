#include<stdio.h>
#include<limits.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n , x , ans = 0 , l = 0;
        scanf("%d %d",&n,&x);
        char s[n];
        // for(int i = 0 ; i < n ; i++)
        scanf("%s",&s);
        int a[n];
        a[l]=x;
        l++;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i]=='L')
            {
                x = x - 1;
                a[l] = x ;
                l++;
            }
            else
            {
                x = x + 1;
                a[l] = x;
                l++;
            }
        }
        for(int i = 0 ; i < l ; i++)
        {
            for(int j = i + 1 ; j< l ; j++)
            {
                if(a[i] == a[j])
                   a[j] = INT_MAX;
            }
            if(a[i] != INT_MAX)
                ans++;
        }
        printf("%d\n",ans);
    }
}