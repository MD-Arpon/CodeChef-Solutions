#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int res = n/m;
        int rem = n%m;
        if(res % 2 == 0 && rem == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
