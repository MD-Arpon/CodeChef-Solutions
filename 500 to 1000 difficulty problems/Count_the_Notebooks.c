#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        n*=10;
        printf("%d\n",n);
    }
    return 0;
}
