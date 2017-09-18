#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,l,j=0;
    gets(str);
    printf("%s",str);
    l=strlen(str);
    printf("\n");
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
           j++;
        }
    }
    printf("%d",j+1);
    return 0;
}
