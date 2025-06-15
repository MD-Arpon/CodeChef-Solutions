#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    
    for(int i = 0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        int r[1000000];
        int i = 0;
        while(a>=10)
        {
            int mod = a%10;
            a/=10;
            
            r[i]=a;
            i++;
        }
        for(int j = 0; j<=i;j++)
        {
            if(r[0]==0)
            {
                continue;
            }
            else if(r[0]==0 && r[1])
            {
                continue;
            }
            else 
            {
                printf("%d",r[j]);
            }
            
        }
        printf("\n");
    }
    return 0;
}
