#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],*p1,*p2;
    printf("Please enter 1st string: ");
    gets(s1);
    p1=s1;
    p2=s2;
    p1=p1+strlen(s1)-1;

    while(s1!=p1)
        *p2++=*p1--;
    *p2++=*s1;
    *p2='\0';
    printf("Reverse string is %s",s2);
    return 0;
}
