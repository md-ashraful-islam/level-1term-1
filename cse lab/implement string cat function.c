#include<stdio.h>
void stringcat(char *p1,char *p2)
{
    while(*p1)
    {
        p1++;
    }
    while(*p2)
    {
        *p1=*p2;
        p2++;
        p1++;
    }
    *p1='\0';
}

int main()
{
    char str1[100],str2[50];
    char *p1,*p2;
    printf("Please enter first string: ");
    gets(str1);
    printf("Please enter second string: ");
    gets(str2);
    p1=str1;
    p2=str2;
    stringcat(p1,p2);
    printf("The concatanated string is %s",p1);
    return 0;
}
