#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    int t,i,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&string);
        l=strlen(string);
        if(string[l-1]%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        printf("\n");
    }
    return 0;
}
