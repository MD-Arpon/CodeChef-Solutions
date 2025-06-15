#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int test ;
        scanf("%d",&test);
        int res = test/4;
        float ress = (float) test / 4;
        if(ress == res)
        {
            printf("%d\n",res);
        }
        else if(ress > res)
        {
            printf("%d\n",res+1);
        }
        
    }
    return 0;
}
