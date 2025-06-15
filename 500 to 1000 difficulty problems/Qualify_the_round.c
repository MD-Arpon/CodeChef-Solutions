#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int x,a,b;
        scanf("%d %d %d",&x,&a,&b);
        if((b*2)+a >= x)
        {
            printf("Qualify\n");
        }
        else 
        {
            printf("NotQualify\n");
        }
    }
    return 0;
}
