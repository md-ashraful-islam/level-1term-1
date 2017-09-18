#include<stdio.h>
#include<string.h>
int faces(char str[])
{
    int l;
    l=strlen(str);
    if(l==11 && str[0]=='T')
        return 4;
    if(l==4)
        return 6;
    if(l==10)
        return 8;
    if(l==12)
        return 12;
    if(l==11 && str[0]=='I')
        return 20;
    return 0;
}
int main()
{
    int t,i,r=0;
    scanf("%d",&t);
    char str[100];
    for(i=0;i<=t;i++)
    {
        gets(str);
        r=r+faces(str);
    }
    printf("%d",r);
    return 0;
}
