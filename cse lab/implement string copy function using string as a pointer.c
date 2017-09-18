#include<stdio.h>
void stringcopy(char *p1,char *p2)
{
    while(*p2){
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
}
int main()
{
    char s1[100],s2[100];
    printf("Please enter first string: ");
    gets(s1);
    printf("Please enter second string: ");
    gets(s2);
    stringcopy(s1,s2);
    printf("The copied string is %s",s1);
    return 0;
}

