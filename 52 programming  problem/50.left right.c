#include<stdio.h>
#include<string.h>

int main()
{
    register int k;
    int t,i,l;
    char str[51];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);

        l=strlen(str);

        for(k=1;k<l-1;k++)
        {
            if(str[k]=='R' || str[k]=='r')
            {
                str[k]=str[k+1];
            }
            else if(str[k]=='L' || str[k]=='l')
            {
                str[k]=str[k-1];
            }
        }
        printf("%s",str);
        if(i<t-1)
            printf("\n");
    }

    return 0;
}
