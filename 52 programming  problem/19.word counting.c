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
            if(str[j]==' ')
                k++;
        }

        printf("Count = %d",k+1);

        if(i<t-1)
        printf("\n");
    }
    return 0;
}
