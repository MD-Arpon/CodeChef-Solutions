#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int a,b,c;
        int total = 0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==1)
        {
            printf("%d",c);
        }
        
        else if (a>1)
        {
            for(int i = 1;i<=a;i++)
            {
                if(i%2==0)
                {
                    total+=b;
                }
                else
                {
                    total+=c;
                }
            }
            printf("%d",total);
        }
        printf("\n");

    }
    return 0;
}
