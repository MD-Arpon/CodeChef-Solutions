#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    int even =0;
    int odd = 0;
    for(int i = 1;i<=t;i++)
    {
        int n = 0;
        scanf("%d",&n);
        if(n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd>=even)
    {
        printf("NOT READY");
    }
    else if(even>odd)
    {
        printf("READY FOR BATTLE");
    }
    
    return 0;
}
