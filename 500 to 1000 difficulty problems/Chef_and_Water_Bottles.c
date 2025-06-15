#include <stdio.h>

int main()
{
    
    int nn;
    scanf("%d",&nn);
    for(int i = 0;i<nn;i++)
    {
        int n,x;
        int k;
        scanf("%d %d %d",&n,&x,&k);
        int res = k / x;
        if (res>n)
        {
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",res);
        }
    }
    return 0;
}
