#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    char *p1,*p2;
    printf("Please enter a string: ");
    gets(s1);
    p1=s1;
    p2=s2;
    while(*p1!=' ')
        p1++;
    p1++;
    while(*p1!='\0')
        *p2++=*p1++;
    *p2='\0';
    printf("Result is:%s",s2);
}
