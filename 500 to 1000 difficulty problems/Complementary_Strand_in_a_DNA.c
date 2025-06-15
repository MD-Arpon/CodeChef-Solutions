#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int nn;
        scanf("%d",&nn);
        char s[nn];
        scanf("%s",s);
        for(int i = 0;i<nn;i++)
        {
            //printf("%c",s[i]);
            if(s[i]=='A')
            {
                s[i]='T';
            }
            else if (s[i]=='T')
            {
                s[i]='A';
            }
            else if (s[i]=='C')
            {
                s[i]='G';
            }
            else if (s[i]=='G')
            {
                s[i]='C';
            }
        }
            
        printf("%s\n",s);
    }
    return 0;
}
