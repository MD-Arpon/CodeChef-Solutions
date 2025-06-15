#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++)
    {
        int x;
        int y;
        scanf("%d %d",&x,&y);
        x = (x*4)+y;
        printf("%d\n",x);
    }
    return 0;
}
