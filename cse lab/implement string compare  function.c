#include<stdio.h>
int stringcompare(char *p1,char *p2)
{
    while(*p1)
    {
        if(*p1!=*p2)
            return 1;
        p1++;
        p2++;
    }
    return 0;
}
int main()
{
    char s1[100],s2[100];
    char *p1,*p2;
    p1=s1;
    p2=s2;
    printf("Please enter first string: ");
    gets(s1);
    printf("Please enter second string: ");
    gets(s2);
    if(!stringcompare(p1,p2))
        printf("\n\nYour two string are equal.");
    else
        printf("\n\nYour two string are not equal.");
    return 0;
}
