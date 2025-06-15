#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        float mulOfXandY=(float)x*y;
        
        if((z/mulOfXandY)*100 > 50)
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
