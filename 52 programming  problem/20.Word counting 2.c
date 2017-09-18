#include<stdio.h>
#include<string.h>

int main()
{
    char str[10001];
    int t,i,l,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0,k=0;j<l;j++)
        {
            if(str[j]>='A' && str[j]<='Z')
                str[j]|=32;
            if(str[j]=='!' || str[j]==' ' || str[j]==',' || str[j]==';' || str[j]==':' || str[j]=='.' || str[j]=='/')
                if((str[j+1]>='a' && str[j+1]<='z') || (str[j+1]>='A' && str[j+1]<='Z'))
                    k++;
        }

        printf("Count = %d",k+1);

        if(i<t-1)
        printf("\n");
    }
    return 0;
}
