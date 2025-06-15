#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int x;
        int y;
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            printf("BIKE\n");
        }
        else if(y<x)
        {
            printf("CAR\n");
        }
        else if(x==y)
        {
            printf("SAME\n");
        }
    }
    return 0;
}
