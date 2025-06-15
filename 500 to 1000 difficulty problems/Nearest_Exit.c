#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t<=50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
    }
    return 0;
}
