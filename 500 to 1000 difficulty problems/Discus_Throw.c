#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)

    {
        int n,x,m;
        scanf("%d %d %d",&n,&x,&m);
        if(x>n && x>m)
        {
            printf("%d\n",x);
        }
        else if(n>x && n>m)
        {
            printf("%d\n",n);
        }
        else if(m>n && m>x)
        {
            printf("%d\n",m);
        }
        else if(x == m && x == n)
        {
            printf("%d\n",x);
        }
        else if(x>=n || x >= m)
        {
            printf("%d\n",x);
        }
        else if(n>=x || n>=m)
        {
            printf("%d\n",n);
        }
        else if(m>=x || m>=n)
        {
            printf("%d\n",m);
        }
        
    }
    return 0;
}
