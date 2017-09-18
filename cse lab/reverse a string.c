#include<stdio.h>
int stringlen(char *p)
{
    int i=0;
    while(*p)
    {
        i++;
        p++;
    }
    return i;
}
void revstr(char *p)
{
    char t;
    int i;
    for(i=0;i<stringlen(p)/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+stringlen(p)-i-1);
        *(-1+p+stringlen(p)-i)=t;
    }

}
int main()
{
    char str[1000],*p;
    p=str;
    printf("Please enter your string: ");
    gets(str);
    revstr(p);
    printf("The reverse string is: %s",str);
    return 0;
}
