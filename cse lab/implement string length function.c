#include<stdio.h>
int stringlength(char *p1)
{
    int i=0;
    while(*p1)
    {
        p1++;
        i++;
    }

    return i;
}
int main()
{
    char s1[10000];
    char *p1;
    p1=s1;
    printf("Please enter your string: ");
    gets(s1);
    printf("\nThe length of your string is %d ",stringlength(p1));
    return 0;
}
