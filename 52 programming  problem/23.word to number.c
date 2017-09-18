#include<stdio.h>
#include<string.h>

int main()
{
    register int i,j;
    int t,a[26],l;
    char str[101];

    scanf("%d",&t);
    for(i=0;i<26;i++)
        a[i]=i+1;

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            str[j]&=(~32);
            printf("%d",a[str[j]-'A']);
        }
        if(i<t-1)
            printf("\n");
    }
    return 0;
}
