#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int required = a - b;
        int packet = required / 4;
        float packett = (float) required / 4;
        if(packett <= 0)
        {
            printf("0\n");
        }
       
        else if(packett > packet)
        {
            int packett = packet + 1;
            printf("%d\n",packett);
        }
        else
        {
            int packettt = (int)packett;
            printf("%d\n",packettt);
        }
    }
    return 0;
}
