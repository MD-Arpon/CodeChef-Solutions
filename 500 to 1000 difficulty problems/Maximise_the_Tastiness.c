#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int sum = 0;
        if(a>b)
        {
            sum+=a;
        }
        else 
            sum+=b;
        if(c>d)
            sum+=c;
        else
            sum+=d;

        printf("%d\n",sum);
    }
    return 0;
}
