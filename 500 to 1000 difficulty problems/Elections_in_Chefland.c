#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int n;
        int x;
        int count = 0;
        scanf("%d %d",&n,&x);
        int a[n];
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=x)
            {
               count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
