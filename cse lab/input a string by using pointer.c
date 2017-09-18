#include<stdio.h>
int main()
{
    char **mp,*p,s[100];
    p=s;
    mp=&p;
    printf("Please enter your string: ");
    gets(*mp);
    printf("your string is: ");
    puts(s);
}
