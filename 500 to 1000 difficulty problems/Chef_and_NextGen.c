#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int a,b,x,y;
        scanf("%d %d %d %d",&a,&b,&x,&y);
        int Total_units = x*y;
        int total_required = a*b;
        if(total_required<=Total_units)
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
