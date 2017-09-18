#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,l,j;
    printf("enter executing number:");
    scanf("%d",&n);
    char s[10000];
    while(i<=n)
    {
        gets(s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(j==0 || j==l-1)
            {
                printf("%c",s[j]);
            }
            if(j==l-2)
            {
                printf("%d",l-2);
            }
        }
        i++;
    }
    return 0;
}
