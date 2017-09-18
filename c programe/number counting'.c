#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,n,l;
    char str[10000];
    scanf("%d",&t);
    gets(str);
    for(i=1;i<=t;i++)
    {
        n=0;
        gets(str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            if(str[j]==' ')
            {
               n++;
            }
        }
        if(n!=0)
        {
           printf("%d",n+1);
        }
        else
        {
           printf("%d",n);
        }
        if(i!=t)
        {
            printf("\n");
        }
    }
    return 0;
}
