#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[10001];

    int t,i,l,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            str[j]=tolower(str[j]);
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
                printf("%c",str[j]);
        }

        printf("\n");

        for(j=0;j<l;j++)
        {
            str[j]=tolower(str[j]);
            if(!(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u') && (str[j]>='a' && str[j]<='z'))
                printf("%c",str[j]);
        }
        if(i<t-1)
            printf("\n");
    }
    return 0;
}

