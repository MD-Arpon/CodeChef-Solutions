#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    int count;
    for(int i = 0;i<t;i++)
    {
        int x;
        int y;
        count = 0;
        scanf("%d %d",&x,&y);
        int mul = x * y;
        
        count = mul / 100;
        printf("%d\n",count);
    }
    return 0;
}
