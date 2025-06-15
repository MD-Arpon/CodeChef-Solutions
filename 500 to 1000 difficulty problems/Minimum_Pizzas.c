#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int res = x * n;
        float outt = res / 4;
        float out =(float) res / 4;
        if(out>outt)
        {
            out=out+1;
        }
        int outtt = out;
        printf("%d\n",outtt);
        
    }
    return 0;
}
