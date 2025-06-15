#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int res = z / x;
        float ress = (float) z / x;
        if (x == 1 && z<y)
        {
            printf("NO\n");
        }
        else if(res<=y && res==ress)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }

    }
    return 0;
}
