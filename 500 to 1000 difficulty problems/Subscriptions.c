#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int mod = 0;
        int res = a / 6;
        mod = a % 6;

        if(mod != 0)
        {
            res++;
        }
        printf("%d\n",res*b);
    }
    return 0;
}
