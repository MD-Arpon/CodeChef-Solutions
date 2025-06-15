#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        float res = (float) a/4;
        int ress = a/4;
        if(res>ress)
        {
            printf("Not Good\n");
        }
        else
        {
            printf("Good\n");
        }
    }
    return 0;
}
