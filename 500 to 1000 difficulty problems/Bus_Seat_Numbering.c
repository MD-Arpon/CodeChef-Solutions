#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>=1 && a<=10)
        {
            printf("Lower Double\n");
        } 
        else if(a>=11 && a<=15)
        {
            printf("Lower Single\n");
        } 
        else if(a>=16 && a<=25)
        {
            printf("Upper Double\n");
        }
        else if(a>=26 && a<=30)
        {
            printf("Upper Single\n");
        } 
    }
    return 0;
}
