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
    printf("Please enter your string: ");
    gets(s1);
    printf("\nThe length of your string is %d ",stringlength(s1));
    return 0;
}

