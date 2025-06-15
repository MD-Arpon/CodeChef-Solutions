#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
          int glass;
          scanf("%d",&glass);
          int profit = glass * 15;
          printf("%d\n",profit);
    }
    return 0;
}
