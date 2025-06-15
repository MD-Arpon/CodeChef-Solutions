#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int r1,r2,r3,r4;
        scanf("%d %d %d %d",&r1,&r2,&r3,&r4);
        if(r1 || r2 || r3 || r4 == 1)
        {
            printf("OUT\n");
        }
        else
        {
            printf("IN\n");
        }
    }
    return 0;
}
