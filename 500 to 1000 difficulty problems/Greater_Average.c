#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        float avg ;
        avg = (float) (a + b)  / 2;
        
        
        if(avg <= c)
        {
            printf("NO\n");
        }
        else if (avg>c)
        {
            printf("YES\n");
        }
    }
    
 
    
    return 0;
}
