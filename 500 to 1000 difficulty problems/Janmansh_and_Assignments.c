#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x+3<=10)
        {
            printf("Yes\n");
        }
        else if(x+3>10)
        {
            printf("No\n");
        }
    }
    
    
    return 0;
}
