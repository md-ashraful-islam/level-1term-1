#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k=0,m,c=0,l;
    char str[209],ara[10][22];
    scanf("%d",&t);
    gets(str);
    for(i=1;i<=t;i++)
    {
        gets(str);
        l=strlen(str);
        for(j=0;j<10;j++)
        {
            for(m=0;k<l;k++,m++)
            {
                if(str[k]==' ')
                {
                    ara[j][m]='\0';
                    break;
                }
                else
                {
                    ara[j][m]=str[j];
                }
            }
        }
        printf("%d\n",j);
        for(i=0;i<=j;i++)
        {
            printf("%s\n",ara[i]);
        }
    }

    return 0;
}
