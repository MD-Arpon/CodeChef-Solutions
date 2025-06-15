#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int bucket = x/y;
        int bath = bucket / 2;
        printf("%d\n",bath);
    }

    return 0;
}
