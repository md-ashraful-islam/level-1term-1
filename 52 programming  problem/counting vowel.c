#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[1001];

    int t,i,l,j,k=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            str[j]=tolower(str[j]);
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
                k++;
        }


        printf("Number of vowels = %d",k);
        k=0;
        if(i<t-1)
            printf("\n");
    }
    return 0;
}
