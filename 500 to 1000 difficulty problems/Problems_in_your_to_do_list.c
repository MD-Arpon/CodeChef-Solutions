#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int d[n];
        int count = 0;
        for(int j = 0;j<n;j++)
        {
            
            scanf("%d",&d[j]);
            if(d[j]>=1000)
            {
              count++;
            }
            
        }
        printf("%d\n",count);

    }
    return 0;
}
