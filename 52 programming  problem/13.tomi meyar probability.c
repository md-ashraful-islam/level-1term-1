#include<stdio.h>
#include<conio.h>
#include<string.h>
char str[1000];

int countsubstring(const char *p)
{
    int count=1,i;
    char sub[20][100];
    while(*p)
    {
        if(*p==' ')
            count++;
        p++;
    }
    return count;
}
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",&str);
        printf("%d\n",countsubstring(str));
        printf("%s\n",str);
    }

    return 0;
}
