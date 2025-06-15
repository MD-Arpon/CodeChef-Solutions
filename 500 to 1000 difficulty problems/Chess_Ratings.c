#include <stdio.h>
#include <math.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        float res = (float) b-a;
        res/=8;
        int ress = ceil(res);
        

        printf("%d\n",ress);
    }
    return 0;
}
